
uint FUN_00461e70(undefined8 param_1,undefined1 *param_2,long param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long in_FS_OFFSET;
  undefined4 local_45;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_45 = 0x20202020;
  local_41 = 0;
  if (param_3 == 0) {
LAB_004620a0:
    uVar4 = 0;
    goto LAB_00462043;
  }
  puVar13 = &DAT_0081d1a9;
  if (param_2 == (undefined1 *)0x0) {
    puVar13 = &DAT_0083e5c2;
    param_2 = &DAT_0083e5c2;
  }
  iVar2 = FUN_004b7ba0(param_3);
  if (iVar2 != 0) {
    uVar4 = FUN_004ae9e0(param_1,"%s%s0\n",param_2,puVar13);
    goto LAB_00462043;
  }
  iVar2 = FUN_004b7bb0(param_3);
  if (iVar2 < 0x41) {
    puVar7 = (undefined8 *)FUN_004b7440(param_3);
    iVar2 = FUN_004b7d60(param_3);
    puVar12 = &DAT_0083e5c2;
    if (iVar2 != 0) {
      puVar12 = &DAT_0080b56c;
    }
    uVar4 = FUN_004ae9e0(param_1,"%s%s%s%lu (%s0x%lx)\n",param_2,puVar13,puVar12,*puVar7,puVar12);
    goto LAB_00462043;
  }
  pcVar5 = (char *)FUN_004b21f0();
  if (pcVar5 == (char *)0x0) goto LAB_004620a0;
  pcVar9 = "";
  pcVar10 = pcVar5;
  if (*pcVar5 == '-') {
    pcVar10 = pcVar5 + 1;
    pcVar9 = " (Negative)";
  }
  iVar2 = FUN_004ae9e0(param_1,"%s%s\n",param_2,pcVar9);
  uVar4 = 0;
  if (0 < iVar2) {
    iVar2 = FUN_004ae9e0(param_1,&DAT_007e3d61,&local_45);
    if (0 < iVar2) {
      cVar1 = *pcVar10;
      iVar2 = 0;
      iVar3 = iVar2;
      if ('7' < cVar1) {
        iVar2 = FUN_004ae9e0(param_1,&DAT_0081ade6,0);
        if (iVar2 < 1) goto LAB_0046202d;
        cVar1 = *pcVar10;
        iVar2 = 1;
        iVar3 = iVar2;
      }
      while (cVar1 != '\0') {
        if (((uint)(iVar2 * -0x11111111) < 0x11111112) && (iVar2 != 0)) {
          iVar3 = FUN_004ae9e0(param_1,&DAT_007e3d5f,&local_45);
          if (iVar3 < 1) goto LAB_0046202d;
          plVar6 = (long *)FUN_006e22b0();
          uVar11 = *(undefined4 *)(*plVar6 + (long)pcVar10[1] * 4);
          uVar8 = *(undefined4 *)(*plVar6 + (long)*pcVar10 * 4);
          pcVar9 = "";
        }
        else {
          plVar6 = (long *)FUN_006e22b0();
          pcVar9 = "";
          uVar11 = *(undefined4 *)(*plVar6 + (long)pcVar10[1] * 4);
          uVar8 = *(undefined4 *)(*plVar6 + (long)*pcVar10 * 4);
          if (iVar3 != 0) {
            pcVar9 = ":";
          }
        }
        iVar3 = FUN_004ae9e0(param_1,"%s%c%c",pcVar9,uVar8,uVar11);
        if (iVar3 < 1) goto LAB_0046202d;
        pcVar10 = pcVar10 + 2;
        iVar2 = iVar2 + 1;
        iVar3 = 1;
        cVar1 = *pcVar10;
      }
      iVar2 = FUN_004ae9e0(param_1,&DAT_008243ea);
      uVar4 = (uint)(0 < iVar2);
    }
  }
LAB_0046202d:
  FUN_0041ad60(pcVar5,"../providers/implementations/encode_decode/encode_key2text.c",0x7d);
LAB_00462043:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

