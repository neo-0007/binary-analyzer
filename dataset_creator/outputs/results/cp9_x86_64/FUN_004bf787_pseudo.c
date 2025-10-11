
uint FUN_004bf787(BIO *param_1)

{
  uint uVar1;
  
  uVar1 = BIO_printf(param_1,"CMP %s: %s\n");
  return ~uVar1 >> 0x1f;
}

