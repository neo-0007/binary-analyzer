
bool FUN_004802c0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    iVar1 = FUN_0056b040(*(undefined8 *)(param_1 + 0x10));
    lVar2 = FUN_0041ad90((long)iVar1,"../providers/implementations/signature/rsa_sig.c",0x1e7);
    *(long *)(param_1 + 0xb8) = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x1e8,"setup_tbuf");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    return lVar2 != 0;
  }
  return true;
}

