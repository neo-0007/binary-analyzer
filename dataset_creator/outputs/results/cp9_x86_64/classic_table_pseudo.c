
/* std::ctype<char>::classic_table() */

undefined8 std::ctype<char>::classic_table(void)

{
  long lVar1;
  
                    /* try { // try from 0063a818 to 0063a81c has its CatchHandler @ 0063a826 */
  lVar1 = locale::facet::_S_get_c_locale();
  return *(undefined8 *)(lVar1 + 0x68);
}

