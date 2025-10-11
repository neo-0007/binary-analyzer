
void pt_to_pniels(long param_1,long param_2)

{
  long lVar1;
  
  gf_sub(param_1,param_2 + 0x40,param_2);
  gf_add(param_1 + 0x40,param_2,param_2 + 0x40);
  lVar1 = param_1 + 0x80;
  gf_mulw_unsigned(lVar1,param_2 + 0xc0,0x13154);
  gf_sub(lVar1,ZERO,lVar1);
  gf_add(param_1 + 0xc0,param_2 + 0x80,param_2 + 0x80);
  return;
}

