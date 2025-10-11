
bool FUN_004bc710(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined1 local_148 [264];
  long local_40;
  
  iVar1 = *(int *)(param_2 + 1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    bVar7 = true;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_004bc80b;
  }
  FUN_004b2c00(param_3);
  if (param_2 == param_1) {
    puVar6 = (undefined8 *)FUN_004b2df0(param_3);
    puVar4 = (undefined8 *)FUN_004b2df0(param_3);
    if (puVar6 != (undefined8 *)0x0) goto LAB_004bc773;
LAB_004bc800:
    bVar7 = false;
  }
  else {
    puVar4 = (undefined8 *)FUN_004b2df0(param_3);
    puVar6 = param_1;
    if (param_1 == (undefined8 *)0x0) goto LAB_004bc800;
LAB_004bc773:
    if (puVar4 == (undefined8 *)0x0) goto LAB_004bc800;
    iVar2 = iVar1 * 2;
    lVar5 = FUN_004b8240(puVar6,iVar2);
    if (lVar5 == 0) goto LAB_004bc800;
    if (iVar1 == 4) {
      FUN_005c1b50(*puVar6,*param_2);
    }
    else if (iVar1 == 8) {
      FUN_005c1720(*puVar6,*param_2);
    }
    else if (iVar1 < 0x10) {
      FUN_004bc420(*puVar6,*param_2,iVar1,local_148);
    }
    else {
      cVar3 = FUN_004b75b0((long)iVar1);
      if (iVar1 == 1 << (cVar3 - 1U & 0x1f)) {
        lVar5 = FUN_004b8240(puVar4,4 << (cVar3 - 1U & 0x1f));
        if (lVar5 == 0) goto LAB_004bc800;
        FUN_004bc510(*puVar6,*param_2,iVar1,*puVar4);
      }
      else {
        lVar5 = FUN_004b8240(puVar4,iVar2);
        if (lVar5 == 0) goto LAB_004bc800;
        FUN_004bc420(*puVar6,*param_2,iVar1,*puVar4);
      }
    }
    *(undefined4 *)(puVar6 + 2) = 0;
    bVar7 = true;
    *(int *)(puVar6 + 1) = iVar2;
    if (puVar6 != param_1) {
      lVar5 = FUN_004b8260(param_1,puVar6);
      bVar7 = lVar5 != 0;
    }
  }
  FUN_004b2d50(param_3);
LAB_004bc80b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar7;
}

