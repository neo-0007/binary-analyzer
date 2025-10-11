
int * FUN_004a2560(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (((param_3 == (long *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) &&
     (piVar2 = (int *)FUN_004a21f0(), piVar2 == (int *)0x0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn_pack.c",0x16,"ASN1_item_pack");
    FUN_0051f8f0(0xd,0xc0100,0);
    return (int *)0x0;
  }
  FUN_0041ad60(*(undefined8 *)(piVar2 + 2),"../crypto/asn1/asn_pack.c",0x1d);
  piVar2[2] = 0;
  piVar2[3] = 0;
  iVar1 = FUN_004a6000(param_1,piVar2 + 2,param_2);
  *piVar2 = iVar1;
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn_pack.c",0x21,"ASN1_item_pack");
    FUN_0051f8f0(0xd,0x70,0);
  }
  else {
    if (*(long *)(piVar2 + 2) != 0) {
      if (param_3 == (long *)0x0) {
        return piVar2;
      }
      if (*param_3 != 0) {
        return piVar2;
      }
      *param_3 = (long)piVar2;
      return piVar2;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn_pack.c",0x25,"ASN1_item_pack");
    FUN_0051f8f0(0xd,0xc0100,0);
  }
  if ((param_3 != (long *)0x0) && (*param_3 != 0)) {
    return (int *)0x0;
  }
  FUN_004a2270(piVar2);
  return (int *)0x0;
}

