import unittest
import calc


class TestCalc(unittest.TestCase):

    def test_add(self):
        self.assertEqual(calc.add(10, 15), 25)
        self.assertEqual(calc.add(0, 0), 0)

if __name__ == '__main__':
    unittest.main()
