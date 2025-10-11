
ulong FUN_0059afc0(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x160) != 0) {
LAB_0059afeb:
    uVar5 = (ulong)((*(uint *)(param_1 + 0xe8) >> 7 ^ 1) & 1);
    goto LAB_0059affa;
  }
  uVar5 = FUN_004222c0(*(undefined8 *)(param_1 + 0x158));
  if ((int)uVar5 == 0) goto LAB_0059affa;
  if ((*(uint *)(param_1 + 0xe8) & 0x100) != 0) {
    FUN_004222e0(*(undefined8 *)(param_1 + 0x158));
    goto LAB_0059afeb;
  }
  uVar6 = FUN_0040bef0();
  iVar3 = FUN_005ab010(param_1,uVar6,param_1 + 0x138,0);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100000;
  }
  FUN_0051f000();
  lVar7 = FUN_005a1b40(param_1);
  if (lVar7 == 0) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x40;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0xffffffffffffffff;
  piVar8 = (int *)FUN_0059f590(param_1,0x57,&local_38,0);
  if (piVar8 == (int *)0x0) {
    if (local_38 != -1) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
    }
  }
  else {
    if (*piVar8 != 0) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x10;
    }
    if (*(long *)(piVar8 + 2) != 0) {
      if (*(int *)(*(long *)(piVar8 + 2) + 4) == 0x102) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_purp.c",0x1b9,"ossl_x509v3_cache_extensions");
        FUN_0051f8f0(0xb,0xa8,0);
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
      }
      else {
        uVar6 = FUN_0049fa00();
        *(undefined8 *)(param_1 + 0xd8) = uVar6;
      }
    }
    FUN_0060bea0(piVar8);
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 1;
  }
  plVar9 = (long *)FUN_0059f590(param_1,0x297,&local_38,0);
  if (plVar9 == (long *)0x0) {
    if (local_38 != -1) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
    }
  }
  else {
    uVar13 = *(uint *)(param_1 + 0xe8);
    if ((uVar13 & 0x10) == 0) {
      iVar3 = FUN_0059f520(param_1,0x55,0xffffffff);
      if ((-1 < iVar3) || (iVar3 = FUN_0059f520(param_1,0x56,0xffffffff), -1 < iVar3)) {
        uVar13 = *(uint *)(param_1 + 0xe8);
        goto LAB_0059b11a;
      }
    }
    else {
LAB_0059b11a:
      *(uint *)(param_1 + 0xe8) = uVar13 | 0x80;
    }
    uVar6 = 0xffffffffffffffff;
    if (*plVar9 != 0) {
      uVar6 = FUN_0049fa00();
    }
    *(undefined8 *)(param_1 + 0xe0) = uVar6;
    FUN_00611650(plVar9);
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x400;
  }
  piVar8 = (int *)FUN_0059f590(param_1,0x53,&local_38,0);
  if (piVar8 == (int *)0x0) {
    if (local_38 != -1) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xec) = 0;
    iVar3 = *piVar8;
    if (0 < iVar3) {
      pbVar2 = *(byte **)(piVar8 + 2);
      bVar1 = *pbVar2;
      *(uint *)(param_1 + 0xec) = (uint)bVar1;
      if (iVar3 != 1) {
        *(uint *)(param_1 + 0xec) = (uint)CONCAT11(pbVar2[1],bVar1);
      }
    }
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 2;
    thunk_FUN_004a2270();
    if (*(int *)(param_1 + 0xec) == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_purp.c",0x1e2,"ossl_x509v3_cache_extensions");
      FUN_0051f8f0(0xb,0xa9,0);
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  lVar7 = FUN_0059f590(param_1,0x7e,&local_38,0);
  if (lVar7 == 0) {
    if (local_38 != -1) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
    }
  }
  else {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 4;
    local_38 = 0;
    while (iVar3 = FUN_00436480(lVar7), local_38 < iVar3) {
      uVar6 = FUN_004364a0(lVar7);
      iVar3 = FUN_00423da0(uVar6);
      if (iVar3 < 0xb5) {
        if (iVar3 < 0x81) goto switchD_0059b23e_caseD_86;
        switch(iVar3) {
        case 0x81:
          *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | 1;
          local_38 = local_38 + 1;
          break;
        case 0x82:
          *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | 2;
          local_38 = local_38 + 1;
          break;
        case 0x83:
          *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | 8;
          local_38 = local_38 + 1;
          break;
        case 0x84:
          *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | 4;
          local_38 = local_38 + 1;
          break;
        case 0x85:
          *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | 0x40;
          local_38 = local_38 + 1;
          break;
        default:
          goto switchD_0059b23e_caseD_86;
        case 0x89:
        case 0x8b:
          *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | 0x10;
          local_38 = local_38 + 1;
          break;
        case 0xb4:
          *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | 0x20;
          local_38 = local_38 + 1;
        }
      }
      else if (iVar3 == 0x129) {
        *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | 0x80;
        local_38 = local_38 + 1;
      }
      else {
        if (iVar3 == 0x38e) {
          *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | 0x100;
        }
switchD_0059b23e_caseD_86:
        local_38 = local_38 + 1;
      }
    }
    FUN_00436430(lVar7,FUN_004a06b0);
  }
  piVar8 = (int *)FUN_0059f590(param_1,0x47,&local_38,0);
  if (piVar8 == (int *)0x0) {
    if (local_38 != -1) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
    }
  }
  else {
    uVar13 = 0;
    if (0 < *piVar8) {
      uVar13 = (uint)**(byte **)(piVar8 + 2);
    }
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 8;
    *(uint *)(param_1 + 0xf4) = uVar13;
    thunk_FUN_004a2270();
  }
  lVar7 = FUN_0059f590(param_1,0x52,&local_38,0);
  *(long *)(param_1 + 0xf8) = lVar7;
  if ((lVar7 == 0) && (local_38 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  lVar7 = FUN_0059f590(param_1,0x5a,&local_38,0);
  *(long *)(param_1 + 0x100) = lVar7;
  if ((lVar7 == 0) && (local_38 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  uVar6 = FUN_0059e6c0(param_1);
  uVar10 = FUN_0059e6d0(param_1);
  iVar3 = FUN_0059eab0(uVar10,uVar6);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x20;
    iVar3 = FUN_0059aef0(param_1,*(undefined8 *)(param_1 + 0x100));
    if (iVar3 == 0) {
      uVar6 = FUN_0059ef80(param_1);
      iVar3 = FUN_0059a320(uVar6,param_1);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x2000;
      }
    }
  }
  lVar7 = FUN_0059f590(param_1,0x55,&local_38,0);
  *(long *)(param_1 + 0x118) = lVar7;
  if ((lVar7 == 0) && (local_38 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  lVar7 = FUN_0059f590(param_1,0x29a,&local_38,0);
  *(long *)(param_1 + 0x120) = lVar7;
  if ((lVar7 == 0) && (local_38 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  lVar7 = FUN_0059f590(param_1,0x67,&local_34,0);
  *(long *)(param_1 + 0x110) = lVar7;
  if ((lVar7 == 0) && (local_34 != -1)) {
LAB_0059b5b8:
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  else {
    local_34 = 0;
    while (iVar3 = FUN_00436480(lVar7), local_34 < iVar3) {
      puVar11 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 0x110));
      piVar8 = (int *)*puVar11;
      if (piVar8 == (int *)0x0) {
        iVar3 = FUN_00436480(puVar11[2]);
        if (iVar3 < 1) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_purp.c",0x139,"setup_dp");
          FUN_0051f8f0(0xb,0x8f,0);
          goto LAB_0059b5b8;
        }
        piVar12 = (int *)puVar11[1];
        piVar8 = (int *)*puVar11;
        if (piVar12 != (int *)0x0) goto LAB_0059b485;
        uVar13 = 0x807f;
LAB_0059b4ac:
        *(uint *)(puVar11 + 3) = uVar13;
        if (piVar8 != (int *)0x0) goto LAB_0059b4b4;
      }
      else {
        piVar12 = (int *)puVar11[1];
        if (piVar12 != (int *)0x0) {
LAB_0059b485:
          iVar3 = *piVar12;
          if (iVar3 < 1) {
            uVar13 = *(uint *)(puVar11 + 3);
          }
          else {
            pbVar2 = *(byte **)(piVar12 + 2);
            bVar1 = *pbVar2;
            uVar13 = (uint)bVar1;
            *(uint *)(puVar11 + 3) = (uint)bVar1;
            if (iVar3 != 1) {
              uVar13 = (uint)CONCAT11(pbVar2[1],bVar1);
            }
          }
          uVar13 = uVar13 & 0x807f;
          goto LAB_0059b4ac;
        }
        *(undefined4 *)(puVar11 + 3) = 0x807f;
LAB_0059b4b4:
        iVar3 = 0;
        if (*piVar8 == 1) {
          iVar4 = FUN_00436480(puVar11[2]);
          if (0 < iVar4) {
            do {
              piVar8 = (int *)FUN_004364a0(puVar11[2],iVar3);
              if (*piVar8 == 4) {
                lVar7 = *(long *)(piVar8 + 2);
                if (lVar7 != 0) goto LAB_0059b4fe;
                break;
              }
              iVar3 = iVar3 + 1;
              iVar4 = FUN_00436480(puVar11[2]);
            } while (iVar3 < iVar4);
          }
          lVar7 = FUN_0059e6c0(param_1);
LAB_0059b4fe:
          iVar3 = FUN_0060e420(*puVar11,lVar7);
          if (iVar3 == 0) goto LAB_0059b50f;
        }
      }
      local_34 = local_34 + 1;
      lVar7 = *(long *)(param_1 + 0x110);
    }
  }
  lVar7 = FUN_0059f590(param_1,0x122,&local_38,0);
  *(long *)(param_1 + 0x128) = lVar7;
  if ((lVar7 == 0) && (local_38 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  lVar7 = FUN_0059f590(param_1,0x123,&local_38,0);
  *(long *)(param_1 + 0x130) = lVar7;
  if ((lVar7 == 0) && (local_38 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  local_38 = 0;
  while (iVar3 = FUN_0059f510(param_1), local_38 < iVar3) {
    uVar6 = FUN_0059f550(param_1);
    uVar10 = FUN_005a2b00(uVar6);
    iVar3 = FUN_00423da0(uVar10);
    if (iVar3 == 0x359) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x1000;
    }
    iVar4 = FUN_005a2b40(uVar6);
    if (iVar4 != 0) {
      iVar4 = FUN_0059adc0(uVar6);
      if (iVar4 == 0) {
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x200;
        break;
      }
      if (iVar3 == 0x57) {
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x10000;
      }
      else if (iVar3 < 0x58) {
        if (iVar3 == 0x52) {
          *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x40000;
        }
        else if (iVar3 == 0x55) {
          *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80000;
        }
      }
      else if (iVar3 == 0x5a) {
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x20000;
      }
    }
    local_38 = local_38 + 1;
  }
  FUN_005a1cb0(param_1);
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100;
  *(undefined4 *)(param_1 + 0x160) = 1;
  FUN_0051f050();
  uVar13 = *(uint *)(param_1 + 0xe8);
  if ((uVar13 & 0x100080) == 0) {
    FUN_004222e0(*(undefined8 *)(param_1 + 0x158));
    uVar5 = 1;
  }
  else {
    if ((uVar13 & 0x80) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_purp.c",0x27b,"ossl_x509v3_cache_extensions");
      FUN_0051f8f0(0xb,0x9e,0);
LAB_0059b50f:
      uVar13 = *(uint *)(param_1 + 0xe8);
    }
    *(uint *)(param_1 + 0xe8) = uVar13 | 0x100;
    FUN_004222e0(*(undefined8 *)(param_1 + 0x158));
    uVar5 = 0;
  }
LAB_0059affa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

