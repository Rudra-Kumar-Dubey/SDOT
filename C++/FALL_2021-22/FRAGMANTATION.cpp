#include <iostream>

using namespace std;

int main()

{

  // variable initialization and allocation

  int blocksize[10], processsize[10], blockno, processno, flags[10], allocation[10], i, j;

  for (i = 0; i < 10; i++)

  {

    flags[i] = 0;

    allocation[i] = -1;
  }

  // entering blocks

  cout << "Fill the number of blocks: ";

  cin >> blockno;

  cout << "\nFill size of each block: ";

  for (i = 0; i < blockno; i++)

    cin >> blocksize[i];

  // Entering processes

  cout << "\nFill the number of processes: ";

  cin >> processno;

  cout << "\nEnter each process size: ";

  for (i = 0; i < processno; i++)

    cin >> processsize[i];

  // memory allocation as per first fit

  for (i = 0; i < processno; i++)

    for (j = 0; j < blockno; j++)

      if (flags[j] == 0 && blocksize[j] >= processsize[i])

      {

        allocation[j] = i;

        flags[j] = 1;

        break;
      }

  // display allocation details

  int sum = 0;
  int absum = 0;
  int ab = 0;
  cout << "\nBlock no.\tsize\t\tprocess no.\t\tProcess size\t\tWaste memory";

  for (i = 0; i < blockno; i++)

  {

    cout << "\n"
         << i + 1 << "\t\t" << blocksize[i] << "\t\t";

    if (flags[i] == 1)
    {

      cout << allocation[i] + 1 << "\t\t\t" << processsize[allocation[i]] << "\t\t\t" << blocksize[i] - processsize[allocation[i]];
      sum = sum + (blocksize[i] - processsize[allocation[i]]);
    }
    else
    {
      cout << "\t\t\t"
           << "Not allocated"
           << "\t\t" << blocksize[i];
      absum = blocksize[i];
    }
  }

  cout << endl;

  cout << "Internal fragmentation: " << sum << endl;
  cout << "External fragmentation: " << absum + sum;

  return 0;
}
