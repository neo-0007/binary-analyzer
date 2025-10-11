
int FUN_004a27d0(int *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*param_1 == 4) && (*(long *)(param_1 + 2) != 0)) {
    uVar2 = FUN_004a23e0();
    iVar1 = FUN_004a23b0(*(undefined8 *)(param_1 + 2));
    if (iVar1 <= param_3) {
      param_3 = iVar1;
    }
    if ((0 < param_3) && (param_2 != 0)) {
      thunk_FUN_00713a50(param_2,uVar2,(long)param_3);
      return iVar1;
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/evp_asn1.c",0x28,"ASN1_TYPE_get_octetstring");
    iVar1 = -1;
    FUN_0051f8f0(0xd,0x6d,0);
  }
  return iVar1;
}

