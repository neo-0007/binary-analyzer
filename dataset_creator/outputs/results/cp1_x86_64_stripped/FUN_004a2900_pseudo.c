
ulong FUN_004a2900(int *param_1,long *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (((*param_1 == 0x10) && (*(long *)(param_1 + 2) != 0)) &&
     (piVar3 = (int *)FUN_004a12d0(&DAT_009018c0,param_1), piVar3 != (int *)0x0)) {
    uVar4 = *(undefined8 *)(piVar3 + 2);
    iVar1 = *piVar3;
    iVar2 = FUN_004a23b0();
    uVar6 = (ulong)iVar2;
    if (param_2 != (long *)0x0) {
      *param_2 = (long)iVar1;
    }
    if (param_3 != 0) {
      uVar4 = FUN_004a23e0(uVar4);
      uVar5 = (long)param_4;
      if (iVar2 < param_4) {
        uVar5 = uVar6;
      }
      thunk_FUN_00713a50(param_3,uVar4,uVar5);
    }
    if (iVar2 != -1) goto LAB_004a2991;
  }
  else {
    piVar3 = (int *)0x0;
  }
  FUN_0051f420();
  uVar6 = 0xffffffff;
  FUN_0051f540("../crypto/asn1/evp_asn1.c",0x80,"ASN1_TYPE_get_int_octetstring");
  FUN_0051f8f0(0xd,0x6d,0);
LAB_004a2991:
  FUN_004a6ba0(piVar3,&DAT_009018c0);
  return uVar6 & 0xffffffff;
}

