
bool FUN_0061ba80(long *param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  undefined1 auStack_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (long *)0x0) && (((*param_1 != 0 || (param_1[2] != 0)) || (param_1[1] != 0)))) {
    iVar2 = FUN_004ae9e0(param_2,"%*snamingAuthority: ",param_3,&DAT_0083e5c2);
    if (0 < iVar2) {
      if (*param_1 == 0) {
LAB_0061bb6a:
        if ((param_1[2] == 0) ||
           (((iVar2 = FUN_004ae9e0(param_2,"%*s  namingAuthorityText: ",param_3,&DAT_0083e5c2),
             0 < iVar2 && (iVar2 = FUN_005b55e0(param_2,param_1[2]), 0 < iVar2)) &&
            (iVar2 = FUN_004ae9e0(param_2,&DAT_008243ea), 0 < iVar2)))) {
          bVar1 = true;
          if (param_1[1] == 0) goto LAB_0061bc32;
          iVar2 = FUN_004ae9e0(param_2,"%*s  namingAuthorityUrl: ",param_3,&DAT_0083e5c2);
          if ((0 < iVar2) && (iVar2 = FUN_005b55e0(param_2,param_1[1]), 0 < iVar2)) {
            iVar2 = FUN_004ae9e0(param_2,&DAT_008243ea);
            bVar1 = 0 < iVar2;
            goto LAB_0061bc32;
          }
        }
      }
      else {
        uVar3 = FUN_00423da0();
        puVar4 = (undefined1 *)FUN_00423c40(uVar3);
        iVar2 = FUN_004ae9e0(param_2,"%*s  admissionAuthorityId: ",param_3,&DAT_0083e5c2);
        if (0 < iVar2) {
          FUN_00423e90(auStack_c8,0x80,*param_1,1);
          pcVar5 = " (";
          pcVar6 = ")";
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0083e5c2;
            pcVar5 = "";
            pcVar6 = "";
          }
          iVar2 = FUN_004ae9e0(param_2,"%s%s%s%s\n",puVar4,pcVar5,auStack_c8,pcVar6);
          if (0 < iVar2) goto LAB_0061bb6a;
        }
      }
    }
  }
  bVar1 = false;
LAB_0061bc32:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar1;
}

