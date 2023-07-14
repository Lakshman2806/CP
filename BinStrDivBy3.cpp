class Solution
{
public:
	int isDivisible(string s)
	{
		// complete the function here
		int count = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '1')
			{
				if (i % 2)

				{
					count += 2;
				}
				else
				{
					count += 1;
				}
			}
		}
		if (count % 3)
			return 0;
		return 1;
	}
};
