import subprocess
import os
import random
from datetime import datetime, timedelta

def run_command(command):
    """Function to run a shell command."""
    result = subprocess.run(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
    return result.stdout, result.stderr

def get_all_files(directory="."):
    """Function to get all files in the specified directory."""
    all_files = []
    for root, dirs, files in os.walk(directory):
        for file in files:
            all_files.append(os.path.join(root, file))
    return all_files

def random_time():
    """Generate a random time in HH:MM:SS format."""
    hour = random.randint(0, 23)
    minute = random.randint(0, 59)
    second = random.randint(0, 59)
    return f"{hour:02}:{minute:02}:{second:02}"

def main():
    start_date_input = input("Enter the start date (yyyy-mm-dd): ")
    end_date_input = input("Enter the end date (yyyy-mm-dd): ")

    start_date = datetime.strptime(start_date_input, "%Y-%m-%d")
    end_date = datetime.strptime(end_date_input, "%Y-%m-%d")

    all_files = get_all_files()

    current_date = start_date
    while current_date <= end_date:
        random_file = random.choice(all_files)

        # Setting GIT_AUTHOR_DATE and GIT_COMMITTER_DATE with random time
        date_str = f"{current_date.strftime('%Y-%m-%d')} {random_time()}"
        os.environ["GIT_AUTHOR_DATE"] = date_str
        os.environ["GIT_COMMITTER_DATE"] = date_str

        # Running the commands
        _, err1 = run_command(f'git add "{random_file}"')
        _, err2 = run_command('git commit -m "Automated commit"')

        # Error handling
        if err1 or err2:
            print(f"Error occurred on {date_str}: {err1} {err2}")

        # Move to the next date
        current_date += timedelta(days=1)

if __name__ == "__main__":
    main()
