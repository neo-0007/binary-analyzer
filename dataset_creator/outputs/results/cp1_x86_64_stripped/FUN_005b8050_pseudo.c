
uint FUN_005b8050(undefined8 param_1,int *param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = FUN_005b73c0(&local_78);
  if (iVar3 == 0) {
    iVar3 = FUN_004ab7e0(param_1,"Bad time value",0xe);
    uVar4 = -(uint)(iVar3 != 0);
    goto LAB_005b8114;
  }
  iVar3 = *param_2;
  lVar1 = *(long *)(param_2 + 2);
  param_3 = param_3 & 0xf;
  if (*(char *)(lVar1 + -1 + (long)iVar3) == 'Z') {
    if (param_2[1] == 0x18) {
      bVar2 = true;
      goto LAB_005b81d3;
    }
    pcVar6 = " GMT";
    if (param_3 == 1) {
      pcVar6 = "Z";
      goto LAB_005b8161;
    }
  }
  else {
    if (param_2[1] == 0x18) {
      bVar2 = false;
LAB_005b81d3:
      iVar9 = 0;
      lVar8 = 0;
      if ((0xf < iVar3) && (*(char *)(lVar1 + 0xe) == '.')) {
        lVar8 = lVar1 + 0xe;
        pcVar6 = (char *)(lVar1 + 0xf);
        iVar9 = 1;
        do {
          iVar5 = FUN_00546750((int)*pcVar6);
          if (iVar5 == 0) break;
          iVar9 = iVar9 + 1;
          pcVar6 = pcVar6 + 1;
        } while (iVar9 != iVar3 + -0xe);
      }
      if (param_3 == 1) {
        pcVar6 = "Z";
        if (!bVar2) {
          pcVar6 = "";
        }
        iVar3 = FUN_004ae9e0(param_1,"%4d-%02d-%02d %02d:%02d:%02d%.*s%s",local_64 + 0x76c,
                             local_68 + 1,local_6c,local_70,local_74,local_78,iVar9,lVar8,pcVar6);
        uVar4 = (uint)(0 < iVar3);
      }
      else {
        puVar7 = &DAT_0080ea9c;
        if (!bVar2) {
          puVar7 = &DAT_0083e5c2;
        }
        iVar3 = FUN_004ae9e0(param_1,"%s %2d %02d:%02d:%02d%.*s %d%s",
                             &DAT_0080ea20 + (long)local_68 * 4,local_6c,local_70,local_74,local_78,
                             iVar9,lVar8,local_64 + 0x76c,puVar7);
        uVar4 = (uint)(0 < iVar3);
      }
      goto LAB_005b8114;
    }
    pcVar6 = "";
    if (param_3 == 1) {
LAB_005b8161:
      iVar3 = FUN_004ae9e0(param_1,"%4d-%02d-%02d %02d:%02d:%02d%s",local_64 + 0x76c,local_68 + 1,
                           local_6c,local_70,local_74,local_78,pcVar6);
      uVar4 = (uint)(0 < iVar3);
      goto LAB_005b8114;
    }
  }
  iVar3 = FUN_004ae9e0(param_1,"%s %2d %02d:%02d:%02d %d%s",&DAT_0080ea20 + (long)local_68 * 4,
                       local_6c,local_70,local_74,local_78,local_64 + 0x76c,pcVar6);
  uVar4 = (uint)(0 < iVar3);
LAB_005b8114:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

