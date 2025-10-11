
bool FUN_00665e10(long param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar12;
  undefined1 *puVar13;
  undefined8 **ppuVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  undefined8 *local_78;
  long *local_70;
  uint local_64;
  long local_60;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 **ppuVar11;
  
  ppuVar14 = &local_78;
  ppuVar11 = &local_78;
  ppuVar10 = &local_78;
  ppuVar12 = &local_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(param_1 + 200) == (long *)0x0) goto LAB_00665fd7;
  cVar6 = (**(code **)(**(long **)(param_1 + 200) + 0x30))();
  if (cVar6 != '\0') {
LAB_00665f03:
    *(undefined8 *)((long)ppuVar12 + -8) = 0x665f12;
    lVar9 = FUN_006c3f80(param_1 + 0x68,param_2,param_3);
    puVar13 = (undefined1 *)ppuVar12;
LAB_00665f12:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar13 + -8) = &UNK_00665fe1;
      FUN_00771f60();
    }
    return lVar9 == param_3;
  }
  iVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x40))();
  uVar15 = iVar7 * param_3 + 0x17;
  ppuVar5 = &local_78;
  while (ppuVar11 != (undefined8 **)((long)&local_78 - (uVar15 & 0xfffffffffffff000))) {
    ppuVar10 = (undefined8 **)((long)ppuVar5 + -0x1000);
    *(undefined8 *)((long)ppuVar5 + -8) = *(undefined8 *)((long)ppuVar5 + -8);
    ppuVar11 = (undefined8 **)((long)ppuVar5 + -0x1000);
    ppuVar5 = (undefined8 **)((long)ppuVar5 + -0x1000);
  }
  uVar15 = (ulong)((uint)uVar15 & 0xff0);
  lVar4 = -uVar15;
  ppuVar12 = (undefined8 **)((long)ppuVar10 + lVar4);
  ppuVar14 = (undefined8 **)((long)ppuVar10 + lVar4);
  if (uVar15 != 0) {
    *(undefined8 *)((long)ppuVar10 + -8) = *(undefined8 *)((long)ppuVar10 + -8);
  }
  plVar1 = *(long **)(param_1 + 200);
  local_70 = &local_50;
  uVar15 = (ulong)((long)ppuVar10 + lVar4 + 0xf) & 0xfffffffffffffff0;
  local_78 = &local_48;
  lVar9 = *plVar1;
  *(long **)((long)ppuVar10 + lVar4 + -8) = local_70;
  *(ulong *)((long)ppuVar10 + lVar4 + -0x10) = iVar7 * param_3 + uVar15;
  pcVar2 = *(code **)(lVar9 + 0x10);
  *(undefined8 *)((long)ppuVar10 + lVar4 + -0x18) = 0x665ef3;
  uVar8 = (*pcVar2)(plVar1,param_1 + 0x84,param_2,param_2 + param_3,local_78,uVar15);
  if (uVar8 < 2) {
    local_60 = local_50;
    param_3 = local_50 - uVar15;
    *(undefined8 *)((long)ppuVar10 + lVar4 + -8) = 0x665f63;
    local_64 = uVar8;
    lVar9 = FUN_006c3f80(param_1 + 0x68,uVar15,param_3);
    puVar13 = (undefined1 *)((long)ppuVar10 + lVar4);
    if ((param_3 != lVar9) ||
       (puVar13 = (undefined1 *)((long)ppuVar10 + lVar4), (local_64 & 1) == 0)) goto LAB_00665f12;
    plVar1 = *(long **)(param_1 + 200);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar9 = *plVar1;
    *(long **)((long)ppuVar10 + lVar4 + -8) = local_70;
    *(long *)((long)ppuVar10 + lVar4 + -0x10) = local_60;
    pcVar2 = *(code **)(lVar9 + 0x10);
    *(undefined8 *)((long)ppuVar10 + lVar4 + -0x18) = 0x665f98;
    iVar7 = (*pcVar2)(plVar1,param_1 + 0x84,local_48,uVar3,local_78,uVar15);
    uVar3 = *(undefined8 *)((long)ppuVar10 + lVar4 + -8);
    if (iVar7 != 2) {
      param_3 = local_50 - uVar15;
      *(undefined8 *)((long)ppuVar10 + lVar4 + -8) = 0x665fb4;
      lVar9 = FUN_006c3f80(param_1 + 0x68,uVar15,param_3,uVar3);
      puVar13 = (undefined1 *)((long)ppuVar10 + lVar4);
      goto LAB_00665f12;
    }
  }
  else if (uVar8 == 3) goto LAB_00665f03;
  *(undefined8 *)((long)ppuVar10 + lVar4 + -8) = 0x665fd7;
  FUN_004042e0("basic_filebuf::_M_convert_to_external conversion error");
LAB_00665fd7:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppuVar14 + -8) = 0x665fdc;
  FUN_00403826();
}

