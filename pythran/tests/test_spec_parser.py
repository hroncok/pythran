import unittest
from pythran import spec_parser
import os.path

#pythran export a((float,(int,long),str list) list list)
#pythran export a(str)
#pythran export a( (str,str), int, long list list)

class TestSpecParser(unittest.TestCase):

    def test_parser(self):
        real_path = os.path.splitext(os.path.realpath(__file__))[0]+".py"
        print spec_parser(real_path)
