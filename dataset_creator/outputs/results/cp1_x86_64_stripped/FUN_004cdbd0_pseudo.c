
long FUN_004cdbd0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = thunk_FUN_006e8f20("OPENSSL_CONF");
  if (lVar1 != 0) {
    lVar1 = FUN_0041c2c0(lVar1,"../crypto/conf/conf_mod.c",0x226);
    return lVar1;
  }
  uVar2 = FUN_0059f3e0();
  lVar1 = thunk_FUN_007129d0(uVar2);
  lVar3 = FUN_0041ad90(lVar1 + 0xd,"../crypto/conf/conf_mod.c",0x22d);
  if (lVar3 != 0) {
    FUN_004aeb30(lVar3,lVar1 + 0xd,"%s%s%s",uVar2,&DAT_00823afc,"openssl.cnf");
  }
  return lVar3;
}

