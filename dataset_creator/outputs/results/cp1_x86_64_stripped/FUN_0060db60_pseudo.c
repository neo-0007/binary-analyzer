
undefined8 FUN_0060db60(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_3 + 8);
  iVar1 = thunk_FUN_00712780(uVar6,"fullname");
  if (iVar1 == 0) {
    uVar6 = 0;
    lVar4 = FUN_0060d5d0(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar4 == 0) goto LAB_0060dc80;
  }
  else {
    iVar1 = thunk_FUN_00712780(uVar6,"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    puVar2 = (undefined8 *)FUN_005ad560();
    if (puVar2 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    lVar3 = FUN_0061dcb0(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar3 == 0) {
      FUN_005ad580(puVar2);
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_crld.c",0x57,"set_dist_point_name");
      FUN_0051f8f0(0x22,0x96,0);
      return 0xffffffff;
    }
    iVar1 = FUN_0059e2f0(puVar2,lVar3,0x1001);
    lVar4 = 0;
    FUN_0061dd50(param_2,lVar3);
    uVar6 = *puVar2;
    *puVar2 = 0;
    FUN_005ad580(puVar2);
    if ((iVar1 == 0) || (iVar1 = FUN_00436480(uVar6), iVar1 < 1)) goto LAB_0060dc80;
    iVar1 = FUN_00436480(uVar6);
    lVar3 = FUN_004364a0(uVar6,iVar1 + -1);
    if (*(int *)(lVar3 + 0x10) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_crld.c",0x66,"set_dist_point_name");
      FUN_0051f8f0(0x22,0xa1,0);
      goto LAB_0060dc80;
    }
  }
  if (*param_1 == 0) {
    puVar5 = (undefined4 *)FUN_0060db40();
    *param_1 = (long)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      if (lVar4 != 0) {
        *puVar5 = 0;
        *(long *)(puVar5 + 2) = lVar4;
        return 1;
      }
      *(undefined8 *)(puVar5 + 2) = uVar6;
      *puVar5 = 1;
      return 1;
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_crld.c",0x6d,"set_dist_point_name");
    FUN_0051f8f0(0x22,0xa0,0);
  }
LAB_0060dc80:
  FUN_00436430(lVar4,FUN_0060e6f0);
  FUN_00436430(uVar6,FUN_005acaf0);
  return 0xffffffff;
}

