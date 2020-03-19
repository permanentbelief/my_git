#pragma once

#include "RBTree.h"

namespace bit
{
	template<class K>
	class set
	{
	public:
		void Insert(const K& k)
		{
			_t.Insert(k);
		}
	private:
		struct SetKeyOfValue
		{
			const K& operator()(const K& k)
			{
				return k;
			}
		};

		RBTree<K, K, SetKeyOfValue> _t;
	};

	void test_set()
	{
		set<int> s;
		s.Insert(1);
	}
}