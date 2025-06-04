/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:13:05 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/06/04 14:46:34 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <iostream>
#include <list>

int main()
{
	{
		std::cout << "========================================= BASIC TEST =========================================" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "========================================= SAME TEST WITH A LIST =========================================" << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	{
		std::cout << "========================================= CONST STACK TEST =========================================" << std::endl;
		MutantStack<int> mstack;
		
		for (int i = 0; i < 10; i++) {
			mstack.push(i);
		}
		MutantStack<int> const cstack(mstack);
		MutantStack<int>::const_iterator it = cstack.cbegin();
		MutantStack<int>::const_iterator ite = cstack.cend();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		std::cout << "========================================= CONST REVERSE STACK TEST =========================================" << std::endl;
		MutantStack<int> mstack;
		
		for (int i = 0; i < 10; i++) {
			mstack.push(i);
		}
		MutantStack<int> const cstack(mstack);
		MutantStack<int>::const_reverse_iterator it = cstack.crbegin();
		MutantStack<int>::const_reverse_iterator ite = cstack.crend();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		std::cout << "========================================= REVERSE ITERATOR TEST =========================================" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "========================================= REVERSE TEST WITH A LIST =========================================" << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::reverse_iterator it = mstack.rbegin();
		std::list<int>::reverse_iterator ite = mstack.rend();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	return 0;
}