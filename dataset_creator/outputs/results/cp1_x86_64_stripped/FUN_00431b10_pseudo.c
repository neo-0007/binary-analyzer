
bool FUN_00431b10(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar2 = thunk_FUN_00540f20(*(undefined8 *)(param_2 + 0x88));
    iVar1 = FUN_0056b040(uVar2);
    lVar3 = FUN_0041ad90((long)iVar1,"../crypto/rsa/rsa_pmeth.c",0x77);
    *(long *)(param_1 + 0x38) = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_pmeth.c",0x78,"setup_tbuf");
      FUN_0051f8f0(4,0xc0100,0);
    }
    return lVar3 != 0;
  }
  return true;
}

