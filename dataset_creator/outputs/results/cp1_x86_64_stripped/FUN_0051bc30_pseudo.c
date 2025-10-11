
int FUN_0051bc30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = FUN_0040a180();
  FUN_006fdea0("(TEST_ENG_OPENSSL_RC4) test_init_key() called\n",1,0x2e,PTR_DAT_0093e068);
  iVar4 = iVar1;
  if (0 < iVar1) {
    uVar2 = FUN_004098f0(param_1);
    thunk_FUN_00713a50(uVar2,param_2,(long)iVar1);
    uVar2 = FUN_004098f0(param_1);
    lVar3 = FUN_004098f0(param_1);
    iVar4 = 1;
    FUN_00566f70(lVar3 + 0x10,iVar1,uVar2);
  }
  return iVar4;
}

