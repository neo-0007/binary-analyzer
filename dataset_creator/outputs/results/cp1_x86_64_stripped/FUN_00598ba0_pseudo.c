
undefined8 FUN_00598ba0(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  int local_a0;
  int local_9c;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_005b0980(param_2);
  if (iVar2 == 0) goto LAB_00598bda;
  lVar3 = FUN_005b0de0(param_2);
  lVar4 = FUN_005b0e00(param_2);
  if (lVar3 == 0) {
    FUN_004ae9e0(param_1,"%*sNo Trusted Uses.\n",param_3,&DAT_0083e5c2);
    if (lVar4 != 0) goto LAB_00598ce0;
LAB_00598e9c:
    FUN_004ae9e0(param_1,"%*sNo Rejected Uses.\n",param_3,&DAT_0083e5c2);
  }
  else {
    FUN_004ae9e0(param_1,"%*sTrusted Uses:\n%*s",param_3,&DAT_0083e5c2,param_3 + 2);
    bVar1 = true;
    local_9c = 0;
    while (iVar2 = FUN_00436480(lVar3), local_9c < iVar2) {
      if (!bVar1) {
        FUN_004ab870(param_1,&DAT_00801fb4);
      }
      uVar5 = FUN_004364a0(lVar3,local_9c);
      FUN_00423e90(local_98,0x50,uVar5,0);
      bVar1 = false;
      FUN_004ab870(param_1,local_98);
      local_9c = local_9c + 1;
    }
    FUN_004ab870(param_1,&DAT_008243ea);
    if (lVar4 == 0) goto LAB_00598e9c;
LAB_00598ce0:
    bVar1 = true;
    FUN_004ae9e0(param_1,"%*sRejected Uses:\n%*s",param_3,&DAT_0083e5c2,param_3 + 2,&DAT_0083e5c2);
    local_9c = 0;
    while (iVar2 = FUN_00436480(lVar4), local_9c < iVar2) {
      if (!bVar1) {
        FUN_004ab870(param_1,&DAT_00801fb4);
      }
      uVar5 = FUN_004364a0(lVar4,local_9c);
      FUN_00423e90(local_98,0x50,uVar5,0);
      bVar1 = false;
      FUN_004ab870(param_1,local_98);
      local_9c = local_9c + 1;
    }
    FUN_004ab870(param_1,&DAT_008243ea);
  }
  lVar3 = FUN_005b0bc0(param_2,&local_9c);
  if (lVar3 != 0) {
    FUN_004ae9e0(param_1,"%*sAlias: %.*s\n",param_3,&DAT_0083e5c2,local_9c,lVar3);
  }
  lVar3 = FUN_005b0bf0(param_2,&local_a0);
  if (lVar3 != 0) {
    FUN_004ae9e0(param_1,"%*sKey Id: ",param_3,&DAT_0083e5c2);
    local_9c = 0;
    if (0 < local_a0) {
      do {
        pcVar6 = "";
        if (local_9c != 0) {
          pcVar6 = ":";
        }
        FUN_004ae9e0(param_1,"%s%02X",pcVar6,*(undefined1 *)(lVar3 + local_9c));
        local_9c = local_9c + 1;
      } while (local_9c < local_a0);
    }
    FUN_004ab7e0(param_1,&DAT_008243ea,1);
  }
LAB_00598bda:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return 1;
}

