
undefined8 FUN_005ad5a0(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  char in_stack_00000008;
  undefined8 in_stack_00000010;
  long local_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_40;
  
  lVar8 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if (0x100000 < param_3) {
    param_3 = 0x100000;
  }
  local_48 = (undefined8 *)0x0;
  local_58 = lVar8;
  uVar6 = FUN_004a5430(&local_50,&local_58,param_3,&DAT_00912be0);
  if ((int)uVar6 < 1) goto LAB_005ad686;
  if (*param_1 != 0) {
    FUN_005acc10(param_1,0,(int)in_stack_00000008,in_stack_00000010);
  }
  iVar3 = FUN_005acc80(&local_48,0);
  puVar2 = local_48;
  if (iVar3 == 0) {
    if (local_48 != (undefined8 *)0x0) goto LAB_005ad6cd;
  }
  else {
    lVar7 = FUN_004c5070(local_48[2],local_58 - lVar8);
    if (lVar7 != 0) {
      thunk_FUN_00713a50(*(undefined8 *)(puVar2[2] + 8),lVar8,local_58 - lVar8);
      for (iVar3 = 0; iVar4 = FUN_00436480(local_50), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        uVar6 = FUN_004364a0(local_50,iVar3);
        for (iVar4 = 0; iVar5 = FUN_00436480(uVar6), iVar4 < iVar5; iVar4 = iVar4 + 1) {
          lVar8 = FUN_004364a0(uVar6,iVar4);
          uVar1 = *puVar2;
          *(int *)(lVar8 + 0x10) = iVar3;
          iVar5 = FUN_00435f80(uVar1,lVar8);
          if (iVar5 == 0) {
            FUN_005ad580(puVar2);
            goto LAB_005ad647;
          }
          FUN_004364d0(uVar6,iVar4,0);
        }
      }
      FUN_0041ad60(puVar2[3],"../crypto/x509/x_name.c",0x138);
      puVar2[3] = 0;
      iVar3 = FUN_00436480(*puVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(puVar2 + 4) = 0;
      }
      else {
        iVar3 = FUN_005acdf0(puVar2);
        if (iVar3 == 0) goto LAB_005ad6cd;
      }
      FUN_00436430(local_50,thunk_FUN_004360b0);
      *(undefined4 *)(puVar2 + 1) = 0;
      *param_1 = (long)puVar2;
      *param_2 = local_58;
      uVar6 = 1;
      goto LAB_005ad686;
    }
LAB_005ad6cd:
    FUN_005ad580(puVar2);
  }
LAB_005ad647:
  FUN_00436430(local_50,&LAB_005acc00);
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x_name.c",0xcf,"x509_name_ex_d2i");
  FUN_0051f8f0(0xd,0x8010a,0);
  uVar6 = 0;
LAB_005ad686:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

