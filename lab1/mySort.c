void mySort(int d[], unsigned int n)
{
 for (int t = 0; t < n - 1; ++t) {

      

    for (int i = 0; i < n - t - 1; ++i) {

      

      if (d[i] > d[i + 1]) {

      

        int temporary = d[i];

        d[i] = d[i + 1];

        d[i + 1] = temporary;

      }

    }

  }
}
