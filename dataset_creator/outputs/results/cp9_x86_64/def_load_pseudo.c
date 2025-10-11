
undefined4 def_load(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  BIO *a;
  ulong uVar3;
  
  a = BIO_new_file(param_2,"rb");
  if (a == (BIO *)0x0) {
    uVar3 = ERR_peek_last_error();
    uVar2 = (uint)uVar3 & 0x7fffffff;
    if ((uVar3 & 0x80000000) == 0) {
      uVar2 = (uint)uVar3 & 0x7fffff;
    }
    if (uVar2 != 0x80) {
      ERR_new();
      ERR_set_debug("../crypto/conf/conf_def.c",0xb5,"def_load");
      ERR_set_error(0xe,0x80002,0);
      return 0;
    }
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("../crypto/conf/conf_def.c",0xb3,"def_load");
    ERR_set_error(0xe,0x72,0);
  }
  else {
    uVar1 = def_load_bio(param_1,a,param_3);
    BIO_free(a);
  }
  return uVar1;
}

