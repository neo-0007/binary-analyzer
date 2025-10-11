
/* std::messages<char>::do_close(int) const */

void __thiscall std::messages<char>::do_close(messages<char> *this,int param_1)

{
  Catalogs *this_00;
  
  this_00 = (Catalogs *)get_catalogs();
  Catalogs::_M_erase(this_00,param_1);
  return;
}

