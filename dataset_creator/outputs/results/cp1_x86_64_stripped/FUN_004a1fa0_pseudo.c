
undefined8 FUN_004a1fa0(int *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_3;
  if (param_3 < 0) {
    if (param_2 == 0) {
      return 0;
    }
    uVar3 = thunk_FUN_007129d0(param_2);
  }
  if (uVar3 < 0x7fffffff) {
    lVar1 = *(long *)(param_1 + 2);
    if (((ulong)(long)*param_1 <= uVar3) || (lVar1 == 0)) {
      lVar2 = FUN_0041ade0(lVar1,uVar3 + 1,"../crypto/asn1/asn1_lib.c",0x134);
      *(long *)(param_1 + 2) = lVar2;
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/asn1_lib.c",0x137,"ASN1_STRING_set");
        FUN_0051f8f0(0xd,0xc0100,0);
        *(long *)(param_1 + 2) = lVar1;
        return 0;
      }
    }
    *param_1 = (int)uVar3;
    if (param_2 != 0) {
      thunk_FUN_00713a50(*(undefined8 *)(param_1 + 2),param_2,uVar3);
      *(undefined1 *)(*(long *)(param_1 + 2) + uVar3) = 0;
    }
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/asn1_lib.c",299,"ASN1_STRING_set");
  FUN_0051f8f0(0xd,0xdf,0);
  return 0;
}

