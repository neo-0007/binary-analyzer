
undefined8 FUN_0051b670(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00771c50(PTR_DAT_0093e068,1,"(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n",param_2);
  lVar1 = FUN_004b0b90(param_2,"r");
  if (lVar1 != 0) {
    uVar2 = FUN_00558c60(lVar1,0,0,0);
    FUN_004ab560(lVar1);
    return uVar2;
  }
  return 0;
}

