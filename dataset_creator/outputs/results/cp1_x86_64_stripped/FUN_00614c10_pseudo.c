
int * FUN_00614c10(undefined8 param_1,long param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  uint local_2a8;
  int local_29c;
  undefined1 local_290 [4];
  undefined1 local_28c [4];
  undefined8 local_288;
  undefined8 local_280;
  ulong local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  undefined8 local_260;
  char *local_258;
  undefined8 local_248;
  int local_240;
  int local_23c;
  char *local_238;
  undefined4 local_230 [120];
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_23c = 1;
  local_288 = 0;
  local_278 = 0;
  local_248 = 0xffffffffffffffff;
  local_50 = 0;
  iVar2 = FUN_004cde20(param_1,0x2c,1,&LAB_00615a50,&local_248);
  iVar3 = local_23c;
  if (iVar2 != 0) {
    piVar7 = (int *)0x0;
    *param_4 = 0xc2;
    goto LAB_00614ffc;
  }
  if (local_240 - 0x10U < 2) {
    if (param_2 == 0) {
      piVar7 = (int *)0x0;
      *param_4 = 0xc0;
      goto LAB_00614ffc;
    }
    if (0x31 < param_3) {
      piVar7 = (int *)0x0;
      *param_4 = 0xb5;
      goto LAB_00614ffc;
    }
    local_268 = (undefined1 *)0x0;
    lVar4 = FUN_00436410();
    if (lVar4 == 0) {
LAB_00615608:
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = local_238;
      if (local_238 != (char *)0x0) {
        pcVar5 = (char *)FUN_0061dcb0(param_2,local_238);
        if (pcVar5 == (char *)0x0) goto LAB_00615608;
        for (iVar3 = 0; iVar2 = FUN_00436480(pcVar5), iVar3 < iVar2; iVar3 = iVar3 + 1) {
          lVar6 = FUN_004364a0(pcVar5,iVar3);
          lVar6 = FUN_00614c10(*(undefined8 *)(lVar6 + 0x10),param_2,param_3 + 1,param_4);
          if ((lVar6 == 0) || (iVar2 = FUN_00435f80(lVar4,lVar6), iVar2 == 0)) goto LAB_0061560b;
        }
      }
      if (local_240 == 0x11) {
        iVar3 = FUN_004a8250(lVar4,&local_268);
      }
      else {
        iVar3 = FUN_004a81f0();
      }
      if ((-1 < iVar3) && (piVar7 = (int *)FUN_004a7f10(), piVar7 != (int *)0x0)) {
        piVar8 = (int *)FUN_004a2180(local_240);
        *(int **)(piVar7 + 2) = piVar8;
        if (piVar8 != (int *)0x0) {
          *piVar7 = local_240;
          *piVar8 = iVar3;
          *(undefined1 **)(piVar8 + 2) = local_268;
          local_268 = (undefined1 *)0x0;
        }
        FUN_0041ad60(local_268,"../crypto/asn1/asn1_gen.c",0x1c6);
        FUN_00436430(lVar4,FUN_004a7f30);
        FUN_0061dd50(param_2,pcVar5);
        goto LAB_00614dec;
      }
    }
LAB_0061560b:
    FUN_0041ad60(local_268,"../crypto/asn1/asn1_gen.c",0x1c6);
    FUN_00436430(lVar4,FUN_004a7f30);
    FUN_0061dd50(param_2,pcVar5);
    piVar7 = (int *)0x0;
    goto LAB_00614ffc;
  }
  piVar7 = (int *)FUN_004a7f10();
  if (piVar7 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn1_gen.c",0x248,"asn1_str2type");
    FUN_0051f8f0(0xd,0xc0100,0);
    goto LAB_00614ffc;
  }
  if (local_238 == (char *)0x0) {
    if (local_240 < 7) {
      if (0 < local_240) {
        switch(local_240) {
        default:
          pcVar5 = "";
          goto switchD_00615079_caseD_1;
        case 2:
switchD_006151ae_caseD_2:
          pcVar5 = "";
          goto switchD_00615079_caseD_2;
        case 3:
        case 4:
          pcVar5 = "";
          goto switchD_00615079_caseD_3;
        case 5:
          goto switchD_006151ae_caseD_5;
        case 6:
          pcVar5 = "";
          goto switchD_00615079_caseD_6;
        }
      }
    }
    else if (local_240 - 10U < 0x15) {
      uVar10 = 1L << ((byte)local_240 & 0x3f);
      if ((uVar10 & 0x5c5c1000) != 0) {
        pcVar5 = "";
        goto LAB_006152cf;
      }
      if ((uVar10 & 0x1800000) != 0) {
        pcVar5 = "";
        goto LAB_0061553e;
      }
      if (local_240 == 10) goto switchD_006151ae_caseD_2;
    }
    pcVar5 = "";
LAB_006150b4:
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn1_gen.c",0x2d6,"asn1_str2type");
    FUN_0051f8f0(0xd,0xc4,0);
LAB_006150ec:
    FUN_0051ef40(2,"string=",pcVar5);
  }
  else {
    pcVar5 = local_238;
    if (6 < local_240) {
      if (local_240 - 10U < 0x15) {
        uVar10 = 1L << ((byte)local_240 & 0x3f);
        if ((uVar10 & 0x5c5c1000) == 0) {
          if ((uVar10 & 0x1800000) == 0) {
            if (local_240 == 10) goto switchD_00615079_caseD_2;
            goto LAB_006150b4;
          }
LAB_0061553e:
          if (iVar3 != 1) {
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/asn1_gen.c",0x281,"asn1_str2type");
            FUN_0051f8f0(0xd,0xc1,0);
            goto LAB_0061510a;
          }
          lVar4 = FUN_004a21f0();
          *(long *)(piVar7 + 2) = lVar4;
          if (lVar4 == 0) {
            FUN_0051f420(0);
            uVar13 = 0x285;
          }
          else {
            iVar3 = FUN_004a1fa0(lVar4,pcVar5,0xffffffff);
            if (iVar3 != 0) {
              *(int *)(*(long *)(piVar7 + 2) + 4) = local_240;
              iVar3 = FUN_005b7c80();
              if (iVar3 != 0) goto switchD_006151ae_caseD_5;
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/asn1_gen.c",0x28e,"asn1_str2type");
              FUN_0051f8f0(0xd,0xb8,0);
              goto LAB_006150ec;
            }
            FUN_0051f420();
            uVar13 = 0x289;
          }
        }
        else {
LAB_006152cf:
          if (iVar3 == 1) {
            uVar13 = 0x1001;
          }
          else {
            uVar13 = 0x1000;
            if (iVar3 != 2) {
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/asn1_gen.c",0x2a2,"asn1_str2type");
              FUN_0051f8f0(0xd,0xb1,0);
              goto LAB_0061510a;
            }
          }
          uVar11 = FUN_004a3ed0(local_240);
          iVar3 = FUN_005b5400(piVar7 + 2,pcVar5,0xffffffff,uVar13,uVar11);
          if (0 < iVar3) goto switchD_006151ae_caseD_5;
          FUN_0051f420();
          uVar13 = 0x2a8;
        }
        FUN_0051f540("../crypto/asn1/asn1_gen.c",uVar13,"asn1_str2type");
        FUN_0051f8f0(0xd,0xc0100,0);
        goto LAB_006150ec;
      }
      goto LAB_006150b4;
    }
    if (local_240 < 1) goto LAB_006150b4;
    switch(local_240) {
    default:
switchD_00615079_caseD_1:
      if (iVar3 != 1) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/asn1_gen.c",0x25a,"asn1_str2type");
        FUN_0051f8f0(0xd,0xbe,0);
        break;
      }
      local_260 = 0;
      local_268 = (undefined1 *)0x0;
      local_258 = pcVar5;
      iVar3 = FUN_0059d2f0(&local_268,piVar7 + 2);
      if (iVar3 != 0) goto switchD_006151ae_caseD_5;
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/asn1_gen.c",0x261,"asn1_str2type");
      FUN_0051f8f0(0xd,0xb0,0);
      goto LAB_006150ec;
    case 2:
switchD_00615079_caseD_2:
      if (iVar3 == 1) {
        lVar4 = FUN_0059d060(0,pcVar5);
        *(long *)(piVar7 + 2) = lVar4;
        if (lVar4 != 0) goto switchD_006151ae_caseD_5;
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/asn1_gen.c",0x26e,"asn1_str2type");
        FUN_0051f8f0(0xd,0xb4,0);
        goto LAB_006150ec;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/asn1_gen.c",0x269,"asn1_str2type");
      FUN_0051f8f0(0xd,0xb9,0);
      break;
    case 3:
    case 4:
switchD_00615079_caseD_3:
      lVar4 = FUN_004a21f0();
      *(long *)(piVar7 + 2) = lVar4;
      if (lVar4 != 0) {
        if (iVar3 == 3) {
          lVar4 = FUN_0041c870(pcVar5,&local_270);
          if (lVar4 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/asn1_gen.c",0x2b7,"asn1_str2type");
            FUN_0051f8f0(0xd,0xb2,0);
            goto LAB_006150ec;
          }
          puVar14 = *(undefined4 **)(piVar7 + 2);
          *(long *)(puVar14 + 2) = lVar4;
          puVar14[1] = local_240;
          *puVar14 = (int)local_270;
        }
        else {
          if (iVar3 != 1) {
            if ((iVar3 == 4) && (local_240 == 3)) {
              iVar3 = FUN_004cde20(pcVar5,0x2c,1,FUN_00615ec0);
              if (iVar3 != 0) goto switchD_006151ae_caseD_5;
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/asn1_gen.c",0x2c3,"asn1_str2type");
              FUN_0051f8f0(0xd,0xbc,0);
              goto LAB_006150ec;
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/asn1_gen.c",0x2c9,"asn1_str2type");
            FUN_0051f8f0(0xd,0xaf,0);
            break;
          }
          FUN_004a1fa0(lVar4,pcVar5,0xffffffff);
        }
        if (local_240 == 3) {
          *(ulong *)(*(long *)(piVar7 + 2) + 0x10) =
               *(ulong *)(*(long *)(piVar7 + 2) + 0x10) & 0xfffffffffffffff0 | 8;
        }
switchD_006151ae_caseD_5:
        *piVar7 = local_240;
LAB_00614dec:
        if (((int)local_248 == -1) && (local_50 == 0)) goto LAB_00614ffc;
        iVar3 = FUN_004a7ee0(piVar7,&local_288);
        FUN_004a7f30(piVar7);
        local_280 = local_288;
        if ((int)local_248 == -1) {
          local_2a8 = 0;
          local_29c = iVar3;
LAB_00614e9b:
          lVar4 = (long)iVar3;
          if (0 < local_50) {
            iVar3 = 0;
            puVar12 = &local_248 + (long)local_50 * 3;
            do {
              iVar3 = iVar3 + 1;
              iVar2 = *(int *)((long)puVar12 + 0xc) + (int)lVar4;
              puVar12[2] = (long)iVar2;
              iVar2 = FUN_004a1f30(0,iVar2,*(undefined4 *)puVar12);
              lVar4 = (long)iVar2;
              puVar12 = puVar12 + -3;
            } while (iVar3 < local_50);
          }
          puVar9 = (undefined1 *)FUN_0041ad90(lVar4,"../crypto/asn1/asn1_gen.c",0xc3);
          if (puVar9 == (undefined1 *)0x0) goto LAB_00615157;
          puVar14 = local_230;
          iVar3 = 0;
          local_270 = puVar9;
          if (0 < local_50) {
            do {
              FUN_004a1e10(&local_270,puVar14[2],puVar14[4],*puVar14,puVar14[1]);
              if (puVar14[3] != 0) {
                *local_270 = 0;
                local_270 = local_270 + 1;
              }
              iVar3 = iVar3 + 1;
              puVar14 = puVar14 + 6;
            } while (iVar3 < local_50);
          }
          if ((int)local_248 != -1) {
            uVar1 = local_2a8;
            if ((local_248._4_4_ == 0) && (uVar1 = 0x20, 1 < (int)local_248 - 0x10U)) {
              uVar1 = local_2a8;
            }
            local_2a8 = uVar1;
            FUN_004a1e10(&local_270,local_2a8,local_278 & 0xffffffff);
          }
          thunk_FUN_00713a50(local_270,local_280,(long)local_29c);
          local_268 = puVar9;
          piVar7 = (int *)FUN_004a7eb0(0,&local_268,lVar4);
        }
        else {
          local_2a8 = FUN_004a1ba0(&local_280,&local_278,local_290,local_28c,(long)iVar3);
          if ((local_2a8 & 0x80) == 0) {
            local_29c = iVar3 - ((int)local_280 - (int)local_288);
            if ((local_2a8 & 1) == 0) {
              local_2a8 = local_2a8 & 0x20;
            }
            else {
              local_278 = 0;
              local_2a8 = 2;
              local_278._0_4_ = 0;
            }
            iVar3 = FUN_004a1f30(0,(undefined4)local_278,local_248 & 0xffffffff);
            goto LAB_00614e9b;
          }
LAB_00615157:
          puVar9 = (undefined1 *)0x0;
          piVar7 = (int *)0x0;
        }
        FUN_0041ad60(local_288,"../crypto/asn1/asn1_gen.c",0xe9);
        FUN_0041ad60(puVar9,"../crypto/asn1/asn1_gen.c",0xea);
        goto LAB_00614ffc;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/asn1_gen.c",0x2b1,"asn1_str2type");
      FUN_0051f8f0(0xd,0xc0100,0);
      break;
    case 5:
      if (*local_238 == '\0') goto switchD_006151ae_caseD_5;
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/asn1_gen.c",0x253,"asn1_str2type");
      FUN_0051f8f0(0xd,0xb6,0);
      break;
    case 6:
switchD_00615079_caseD_6:
      if (iVar3 == 1) {
        lVar4 = FUN_00424530(pcVar5,0);
        *(long *)(piVar7 + 2) = lVar4;
        if (lVar4 != 0) goto switchD_006151ae_caseD_5;
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/asn1_gen.c",0x279,"asn1_str2type");
        FUN_0051f8f0(0xd,0xb7,0);
        goto LAB_006150ec;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/asn1_gen.c",0x275,"asn1_str2type");
      FUN_0051f8f0(0xd,0xbf,0);
    }
  }
LAB_0061510a:
  FUN_004a7f30(piVar7);
  piVar7 = (int *)0x0;
LAB_00614ffc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

