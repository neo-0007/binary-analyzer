
ulong bn_div_words(ulong h,ulong l,ulong d)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = d;
  auVar2._8_8_ = h;
  auVar2._0_8_ = l;
  return SUB168(auVar2 / auVar1,0);
}

