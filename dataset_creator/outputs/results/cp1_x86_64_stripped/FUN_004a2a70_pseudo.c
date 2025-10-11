
ulong FUN_004a2a70(int *param_1,long *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (((*param_1 == 0x10) && (*(long *)(param_1 + 2) != 0)) &&
     (puVar3 = (undefined8 *)FUN_004a12d0(&DAT_00901880,param_1), puVar3 != (undefined8 *)0x0)) {
    uVar4 = *puVar3;
    iVar1 = *(int *)(puVar3 + 1);
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
    if (iVar2 != -1) goto LAB_004a2b01;
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  FUN_0051f420();
  uVar6 = 0xffffffff;
  FUN_0051f540("../crypto/asn1/evp_asn1.c",0xb7,"ossl_asn1_type_get_octetstring_int");
  FUN_0051f8f0(0xd,0x6d,0);
LAB_004a2b01:
  FUN_004a6ba0(puVar3,&DAT_00901880);
  return uVar6 & 0xffffffff;
}

