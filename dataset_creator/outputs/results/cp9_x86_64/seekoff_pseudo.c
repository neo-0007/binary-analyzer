
/* std::__basic_file<char>::seekoff(long, std::_Ios_Seekdir) */

void __thiscall
std::__basic_file<char>::seekoff(__basic_file<char> *this,__off64_t param_1,int param_3)

{
  int __fd;
  
  __fd = fd(this);
  lseek64(__fd,param_1,param_3);
  return;
}

