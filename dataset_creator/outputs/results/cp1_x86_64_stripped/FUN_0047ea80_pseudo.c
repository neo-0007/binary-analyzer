
bool FUN_0047ea80(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return false;
  }
  if (param_1 == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/mac_legacy_sig.c",0x6d,
                   "mac_digest_sign_init");
      FUN_0051f8f0(0x39,0x72,0);
      return false;
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    if (param_3 == 0) goto LAB_0047eab4;
  }
  iVar1 = FUN_00474690(param_3);
  if (iVar1 == 0) {
    return false;
  }
  FUN_00474480(*(undefined8 *)(param_1 + 0x10));
  *(long *)(param_1 + 0x10) = param_3;
  lVar4 = param_3;
LAB_0047eab4:
  lVar2 = *(long *)(lVar4 + 0x28);
  if (lVar2 != 0) {
    lVar2 = FUN_0040a3d0(lVar2);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  lVar3 = *(long *)(lVar4 + 0x38);
  if (lVar3 != 0) {
    lVar3 = FUN_0051a8b0(lVar3);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  iVar1 = FUN_0043c800(*(undefined8 *)(param_1 + 0x18),0,lVar2,param_2,lVar3,
                       *(undefined8 *)(lVar4 + 0x40),0,0);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0053f310(*(undefined8 *)(param_1 + 0x18),
                       *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),
                       *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),param_4);
  return iVar1 != 0;
}

