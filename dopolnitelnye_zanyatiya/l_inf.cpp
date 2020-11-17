#include <iostream>
#include <iomanip>
#include <string>


int main()
{
	int n, m;

	std::cin >> n >> m;

	int rowStart = 0;

	for (int i = 0; i < n; i++)
	{
		int temp = rowStart;

		for (int j = 0; j < m; j++)
		{
			std::cout << std::setw(2) << std::setfill(' ') << temp << " ";
			
			//std::cout << "DEBUG: " << n - i << std::endl;

			if (j < n - i)
			{
				temp += i + j + 1;
			}
			else if (j >= n - i && j < m - i - 1)
			{
				temp += n;
			}
            if ( j >= m - i - 1)
            {
                temp += m - j + n - i - 2  ;
            }

		}

		rowStart += 2 + i;
		std::cout << std::endl;
	}

	return 0;
}