
undefined4 FUN_007a02d0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  int *piVar10;
  long in_FS_OFFSET;
  undefined1 local_8028 [32768];
  
  puVar4 = &stack0xffffffffffffffd8;
  do {
    puVar8 = puVar4;
    *(undefined8 *)(puVar8 + -0x1000) = *(undefined8 *)(puVar8 + -0x1000);
    puVar4 = puVar8 + -0x1000;
  } while (puVar8 + -0x1000 != local_8028);
  *(undefined8 *)(puVar8 + 0x6ff8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined1 **)(puVar8 + -0x1220) = puVar8 + -0x1010;
  *(undefined1 **)(puVar8 + -0x1218) = puVar8 + -0x1010;
  *(undefined8 *)(puVar8 + -0x1228) = 0x7a0336;
  iVar5 = FUN_00701c30(param_1,1);
  if (iVar5 != 1) {
    uVar6 = 0xffffffff;
    goto LAB_007a047e;
  }
  *(undefined1 **)(puVar8 + -0x1150) = puVar8 + -0x1110;
  *(uint **)(puVar8 + -0x1028) = param_1;
  *(undefined1 **)(puVar8 + -0x10e8) = puVar8 + 0x6ff0;
  uVar1 = param_1[0x1d];
  *(undefined8 *)(puVar8 + -0x10f8) = *(undefined8 *)(puVar8 + -0x1220);
  *(undefined8 *)(puVar8 + -0x10f0) = *(undefined8 *)(puVar8 + -0x1218);
  *(uint *)(puVar8 + -0x117c) = uVar1;
  *(undefined4 *)(puVar8 + -0x1130) = 1;
  *(undefined4 *)(puVar8 + -0x11f0) = 0xfbad8004;
  *(undefined8 *)(puVar8 + -0x1168) = 0;
  *(undefined **)(puVar8 + -0x1118) = &DAT_0093f820;
  *(undefined8 *)(puVar8 + -0x1228) = 0x7a03c6;
  uVar6 = FUN_0079de90(puVar8 + -0x11f0,param_2,param_3,param_4);
  *(uint **)(puVar8 + -0x1208) = param_1;
  *(code **)(puVar8 + -0x1210) = FUN_00795710;
  *(undefined8 *)(puVar8 + -0x1228) = 0x7a03e2;
  FUN_00709520(puVar8 + -0x1210);
  if ((*param_1 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar10 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar10 + 2) != lVar2) {
      LOCK();
      iVar5 = *piVar10;
      if (iVar5 == 0) {
        *piVar10 = 1;
      }
      UNLOCK();
      if (iVar5 != 0) {
        *(undefined8 *)(puVar8 + -0x1228) = 0x7a0535;
        FUN_00709590();
      }
      piVar10 = *(int **)(param_1 + 0x22);
      *(long *)(piVar10 + 2) = lVar2;
    }
    lVar2 = *(long *)(puVar8 + -0x1150);
    piVar10[1] = piVar10[1] + 1;
    lVar9 = *(long *)(lVar2 + 0x18);
    iVar5 = (int)(*(long *)(lVar2 + 0x20) - lVar9 >> 2);
    if (0 < iVar5) goto LAB_007a040c;
LAB_007a0449:
    if ((*param_1 & 0x8000) == 0) {
      piVar10 = *(int **)(param_1 + 0x22);
      iVar5 = piVar10[1];
      piVar10[1] = iVar5 + -1;
      if (iVar5 + -1 == 0) {
        piVar10[2] = 0;
        piVar10[3] = 0;
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = 0;
        UNLOCK();
        if (1 < iVar5) {
          *(undefined8 *)(puVar8 + -0x1228) = 0x7a0545;
          FUN_00709660();
        }
      }
    }
  }
  else {
    lVar9 = *(long *)(*(long *)(puVar8 + -0x1150) + 0x18);
    iVar5 = (int)(*(long *)(*(long *)(puVar8 + -0x1150) + 0x20) - lVar9 >> 2);
    if (0 < iVar5) {
LAB_007a040c:
      lVar2 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar2 - 0x93f160U) {
        *(undefined8 *)(puVar8 + -0x1228) = 0x7a050d;
        FUN_00703130();
        lVar9 = *(long *)(*(long *)(puVar8 + -0x1150) + 0x18);
      }
      pcVar3 = *(code **)(lVar2 + 0x38);
      *(undefined8 *)(puVar8 + -0x1228) = 0x7a043e;
      iVar7 = (*pcVar3)(param_1,lVar9,(long)iVar5);
      if (iVar5 != iVar7) {
        uVar6 = 0xffffffff;
      }
      goto LAB_007a0449;
    }
  }
  *(undefined8 *)(puVar8 + -0x1228) = 0x7a047e;
  FUN_00709560(puVar8 + -0x1210);
LAB_007a047e:
  if (*(long *)(puVar8 + 0x6ff8) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -0x1228) = &UNK_007a054f;
    FUN_00771f60();
  }
  return uVar6;
}

