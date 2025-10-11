
void FUN_007843e0(undefined8 *param_1,undefined1 *param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  char *pcVar7;
  uint *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  long local_a0;
  uint local_80;
  uint *local_78;
  uint local_68 [6];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_6;
  if (param_2 == (undefined1 *)0x0) {
    local_a0 = 1;
    pauVar9 = (undefined1 (*) [16])0x2;
    param_2 = &DAT_0083e5c2;
  }
  else {
    lVar2 = thunk_FUN_007129d0(param_2);
    local_a0 = lVar2 + 1;
    pauVar9 = (undefined1 (*) [16])(lVar2 + 2);
  }
  local_78 = (uint *)&stack0x00000008;
  local_80 = 0x18;
  cVar1 = *param_3;
  pcVar7 = param_3;
  if (cVar1 != '\0') {
LAB_0078449b:
    do {
      if (cVar1 == '%') {
        cVar1 = pcVar7[1];
        if (cVar1 == 'x') {
LAB_00784622:
          pauVar9 = (undefined1 (*) [16])(*pauVar9 + 8);
          pcVar7 = pcVar7 + 1;
        }
        else {
          if (cVar1 < 'y') {
            if (cVar1 == 'l') {
LAB_00784618:
              if (pcVar7[2] == 'x') {
                pauVar9 = pauVar9 + 1;
                pcVar7 = pcVar7 + 2;
                goto LAB_0078448f;
              }
              goto LAB_00784622;
            }
            if (cVar1 == 's') {
              if (local_80 < 0x30) {
                uVar6 = (ulong)local_80;
                local_80 = local_80 + 8;
                puVar8 = (uint *)((long)local_68 + uVar6);
              }
              else {
                puVar8 = local_78;
                local_78 = (uint *)((long)local_78 + 8);
              }
              lVar2 = thunk_FUN_007129d0(*(undefined8 *)puVar8);
              pauVar9 = (undefined1 (*) [16])(*pauVar9 + lVar2);
              cVar1 = pcVar7[2];
              pcVar7 = pcVar7 + 2;
              if (cVar1 == '\0') break;
              goto LAB_0078449b;
            }
          }
          else if (cVar1 == 'z') goto LAB_00784618;
          pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
      }
LAB_0078448f:
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((long)pauVar9 < 0) goto LAB_00784790;
  }
  pauVar11 = pauVar9;
  pauVar3 = (undefined1 (*) [16])FUN_007101b0();
  if (pauVar3 != (undefined1 (*) [16])0x0) {
    local_80 = 0x18;
    pauVar9 = (undefined1 (*) [16])(*pauVar3 + (long)*pauVar9);
    param_1[1] = pauVar3;
    param_1[2] = pauVar3;
    local_78 = (uint *)&stack0x00000008;
    cVar1 = *param_3;
joined_r0x0078454e:
    pauVar10 = pauVar3;
    if (cVar1 != '\0') {
      do {
        if (cVar1 == '%') {
          cVar1 = param_3[1];
          pcVar7 = param_3 + 1;
          if (cVar1 == 's') {
            if (local_80 < 0x30) {
              uVar6 = (ulong)local_80;
              local_80 = local_80 + 8;
              puVar8 = (uint *)((long)local_68 + uVar6);
            }
            else {
              puVar8 = local_78;
              local_78 = local_78 + 2;
            }
            pauVar3 = *(undefined1 (**) [16])puVar8;
            pauVar11 = pauVar3;
            uVar6 = thunk_FUN_007129d0();
            if ((ulong)((long)pauVar9 - (long)pauVar10) < uVar6) goto LAB_007847fe;
            pauVar3 = (undefined1 (*) [16])thunk_FUN_00713820(pauVar10,pauVar3);
            pauVar11 = pauVar10;
          }
          else {
            if (cVar1 < 't') {
              if (cVar1 == '%') goto code_r0x0078459b;
              if (cVar1 != 'l') goto LAB_007846f4;
            }
            else {
              if (cVar1 == 'x') {
                if (local_80 < 0x30) {
                  uVar6 = (ulong)local_80;
                  local_80 = local_80 + 8;
                  puVar8 = (uint *)((long)local_68 + uVar6);
                }
                else {
                  puVar8 = local_78;
                  local_78 = local_78 + 2;
                }
                pauVar11 = (undefined1 (*) [16])(ulong)*puVar8;
                pauVar3 = (undefined1 (*) [16])(*pauVar10 + 8);
                pauVar5 = (undefined1 (*) [16])FUN_00795230(pauVar11,pauVar3,0x10,0);
                if (pauVar5 != pauVar10) {
                  thunk_FUN_00713720(pauVar10,0x30,(long)pauVar5 - (long)pauVar10);
                  pauVar11 = pauVar10;
                }
                goto LAB_0078456b;
              }
              if (cVar1 != 'z') goto LAB_007846f4;
            }
            if (param_3[2] != 'x') {
LAB_007846f4:
                    /* WARNING: Subroutine does not return */
              FUN_007873c0("Fatal error: invalid format in exception string\n");
            }
            if (local_80 < 0x30) {
              uVar6 = (ulong)local_80;
              local_80 = local_80 + 8;
              puVar8 = (uint *)((long)local_68 + uVar6);
            }
            else {
              puVar8 = local_78;
              local_78 = local_78 + 2;
            }
            pauVar3 = pauVar10 + 1;
            pauVar11 = *(undefined1 (**) [16])puVar8;
            pauVar5 = (undefined1 (*) [16])FUN_00795230(pauVar11,pauVar3,0x10,0);
            if (pauVar5 != pauVar10) {
              thunk_FUN_00713720(pauVar10,0x30,(long)pauVar5 - (long)pauVar10);
              pauVar11 = pauVar10;
            }
            pcVar7 = param_3 + 2;
          }
        }
        else {
          if (pauVar9 == pauVar10) goto LAB_007847fe;
          (*pauVar10)[0] = cVar1;
          pauVar3 = (undefined1 (*) [16])(*pauVar10 + 1);
          pcVar7 = param_3;
        }
LAB_0078456b:
        cVar1 = pcVar7[1];
        param_3 = pcVar7 + 1;
        pauVar10 = pauVar3;
        if (cVar1 == '\0') break;
      } while( true );
    }
    if (pauVar9 != pauVar3) {
      pauVar11 = (undefined1 (*) [16])(*pauVar3 + 1);
      (*pauVar3)[0] = 0;
      if ((long)pauVar9 - (long)pauVar11 == local_a0) {
        uVar4 = thunk_FUN_00713a50(pauVar11,param_2,local_a0);
        *param_1 = uVar4;
        return;
      }
    }
LAB_007847fe:
    FUN_007842e0();
    FUN_007104f0(*(undefined8 *)pauVar11[1]);
    *(undefined8 *)pauVar11[1] = 0;
    *pauVar11 = (undefined1  [16])0x0;
    return;
  }
LAB_00784790:
  param_1[2] = 0;
  *param_1 = &DAT_0083e5c2;
  param_1[1] = "out of memory";
  return;
code_r0x0078459b:
  if (pauVar9 == pauVar10) goto LAB_007847fe;
  cVar1 = param_3[2];
  (*pauVar10)[0] = 0x25;
  param_3 = param_3 + 2;
  pauVar3 = (undefined1 (*) [16])(*pauVar10 + 1);
  goto joined_r0x0078454e;
}

