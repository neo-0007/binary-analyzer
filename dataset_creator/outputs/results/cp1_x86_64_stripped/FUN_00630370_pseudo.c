
long * FUN_00630370(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  *param_1 = (long)&DAT_009452b8;
  plVar1 = *(long **)(*param_2 + 0x20);
  lVar8 = *plVar1;
  if (lVar8 == 0) {
    FUN_00638440(param_1,0,DAT_009452a0,1,0x2a);
  }
  else {
    if (plVar1[1] != 0) {
      uVar10 = 0;
      lVar9 = lVar8;
      do {
        uVar10 = uVar10 + 1;
        lVar2 = plVar1[uVar10];
        iVar5 = thunk_FUN_00712780(lVar9,lVar2);
        if (iVar5 != 0) {
          FUN_00638bc0(param_1,0x80);
          puVar4 = PTR_PTR_00919060;
          uVar6 = *(undefined8 *)PTR_PTR_00919060;
          uVar7 = thunk_FUN_007129d0(uVar6);
          FUN_00638e20(param_1,uVar6,uVar7);
          lVar8 = *param_1;
          lVar9 = *(long *)(lVar8 + -0x18);
          uVar10 = lVar9 + 1;
          if ((*(ulong *)(lVar8 + -0x10) < uVar10) || (0 < *(int *)(lVar8 + -8))) {
            FUN_00638bc0(param_1,uVar10);
          }
          *(undefined1 *)(*param_1 + *(long *)(*param_1 + -0x18)) = 0x3d;
          puVar3 = (undefined1 *)*param_1;
          if (puVar3 != &DAT_009452b8) {
            *(undefined4 *)(puVar3 + -8) = 0;
            *(ulong *)(puVar3 + -0x18) = uVar10;
            puVar3[lVar9 + 1] = 0;
          }
          uVar6 = **(undefined8 **)(*param_2 + 0x20);
          uVar7 = thunk_FUN_007129d0(uVar6);
          FUN_00638e20(param_1,uVar6,uVar7);
          lVar8 = 8;
          do {
            lVar9 = *param_1;
            lVar2 = *(long *)(lVar9 + -0x18);
            uVar10 = lVar2 + 1;
            if ((*(ulong *)(lVar9 + -0x10) < uVar10) || (0 < *(int *)(lVar9 + -8))) {
              FUN_00638bc0(param_1,uVar10);
            }
            *(undefined1 *)(*param_1 + *(long *)(*param_1 + -0x18)) = 0x3b;
            puVar3 = (undefined1 *)*param_1;
            if (puVar3 != &DAT_009452b8) {
              *(undefined4 *)(puVar3 + -8) = 0;
              *(ulong *)(puVar3 + -0x18) = uVar10;
              puVar3[lVar2 + 1] = 0;
            }
            uVar6 = *(undefined8 *)(puVar4 + lVar8);
            uVar7 = thunk_FUN_007129d0(uVar6);
            FUN_00638e20(param_1,uVar6,uVar7);
            lVar9 = *param_1;
            lVar2 = *(long *)(lVar9 + -0x18);
            uVar10 = lVar2 + 1;
            if ((*(ulong *)(lVar9 + -0x10) < uVar10) || (0 < *(int *)(lVar9 + -8))) {
              FUN_00638bc0(param_1,uVar10);
            }
            *(undefined1 *)(*param_1 + *(long *)(*param_1 + -0x18)) = 0x3d;
            puVar3 = (undefined1 *)*param_1;
            if (puVar3 != &DAT_009452b8) {
              *(undefined4 *)(puVar3 + -8) = 0;
              *(ulong *)(puVar3 + -0x18) = uVar10;
              puVar3[lVar2 + 1] = 0;
            }
            uVar6 = *(undefined8 *)(*(long *)(*param_2 + 0x20) + lVar8);
            uVar7 = thunk_FUN_007129d0(uVar6);
            FUN_00638e20(param_1,uVar6,uVar7);
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0x60);
          return param_1;
        }
        lVar9 = lVar2;
      } while (uVar10 < 0xb);
    }
    uVar6 = thunk_FUN_007129d0(lVar8);
                    /* try { // try from 006303f7 to 006305d5 has its CatchHandler @ 006305f0 */
    FUN_006386a0(param_1,lVar8,uVar6);
  }
  return param_1;
}

