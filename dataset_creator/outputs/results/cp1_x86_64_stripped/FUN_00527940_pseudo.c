
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00527940(long param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  lVar3 = FUN_004098f0();
  if (*(int *)(lVar3 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x2d0) < 0) {
    if (*(int *)(lVar3 + 0xfc) == 0) {
      return 0xffffffff;
    }
    if (param_3 == 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_0054f630(lVar3 + 0x100,param_1 + 0x38,0x10);
        *(undefined4 *)(lVar3 + 0x2c4) = 0x10;
        *(undefined4 *)(lVar3 + 0xfc) = 0;
        return 0;
      }
      if (*(int *)(lVar3 + 0x2c4) < 0) {
        return 0xffffffff;
      }
      uVar7 = FUN_0054f480(lVar3 + 0x100,param_1 + 0x38);
      if ((int)uVar7 != 0) {
        return 0xffffffff;
      }
      *(undefined4 *)(lVar3 + 0xfc) = 0;
      return uVar7;
    }
    lVar6 = lVar3 + 0x100;
    if (param_2 == 0) {
      iVar2 = FUN_0054e3e0(lVar6,param_3,param_4);
    }
    else {
      pcVar10 = *(code **)(lVar3 + 0x2e0);
      if (*(int *)(param_1 + 0x10) == 0) {
        if (pcVar10 == (code *)0x0) {
          iVar2 = FUN_0054e990(lVar6,param_3,param_2,param_4);
        }
        else {
          uVar7 = param_4;
          if (((0xf < param_4) && (pcVar10 == FUN_00495dc0)) &&
             (pcVar10 = FUN_00495dc0, *(code **)(lVar3 + 0x268) == FUN_00550be0)) {
            uVar7 = (ulong)(-*(int *)(lVar3 + 0x270) & 0xf);
            iVar2 = FUN_0054e990(lVar6,param_3,param_2,uVar7,FUN_00495dc0);
            if (iVar2 != 0) {
              return 0xffffffff;
            }
            lVar4 = FUN_0054bb40(param_3 + uVar7,param_2 + uVar7,param_4 - uVar7,
                                 *(undefined8 *)(lVar3 + 0x280),lVar6,lVar3 + 0x140);
            *(long *)(lVar3 + 0x138) = *(long *)(lVar3 + 0x138) + lVar4;
            pcVar10 = *(code **)(lVar3 + 0x2e0);
            lVar4 = uVar7 + lVar4;
            uVar7 = param_4 - lVar4;
            param_2 = param_2 + lVar4;
            param_3 = param_3 + lVar4;
          }
          iVar2 = FUN_0054f140(lVar6,param_3,param_2,uVar7,pcVar10);
        }
      }
      else if (pcVar10 == (code *)0x0) {
        iVar2 = FUN_0054e520(lVar6,param_3,param_2);
      }
      else {
        uVar7 = param_4;
        if (((0x1f < param_4) && (pcVar10 == FUN_00495dc0)) &&
           (pcVar10 = FUN_00495dc0, *(code **)(lVar3 + 0x268) == FUN_00550be0)) {
          uVar7 = (ulong)(-*(int *)(lVar3 + 0x270) & 0xf);
          iVar2 = FUN_0054e520(lVar6,param_3,param_2,uVar7,FUN_00495dc0);
          if (iVar2 != 0) {
            return 0xffffffff;
          }
          lVar4 = FUN_0054be00(param_3 + uVar7,param_2 + uVar7,param_4 - uVar7,
                               *(undefined8 *)(lVar3 + 0x280),lVar6,lVar3 + 0x140);
          *(long *)(lVar3 + 0x138) = *(long *)(lVar3 + 0x138) + lVar4;
          pcVar10 = *(code **)(lVar3 + 0x2e0);
          lVar4 = uVar7 + lVar4;
          uVar7 = param_4 - lVar4;
          param_2 = param_2 + lVar4;
          param_3 = param_3 + lVar4;
        }
        iVar2 = FUN_0054ede0(lVar6,param_3,param_2,uVar7,pcVar10);
      }
    }
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    return param_4 & 0xffffffff;
  }
  lVar3 = FUN_004098f0(param_1);
  if (param_3 != param_2) {
    return 0xffffffff;
  }
  if (param_4 < 0x18) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    uVar9 = 0x18;
  }
  else {
    plVar1 = (long *)(lVar3 + 0x2d8);
    *plVar1 = *plVar1 + 1;
    uVar9 = 0x13;
    if (*plVar1 == 0) {
      FUN_0051f420(iVar2,0x13);
      FUN_0051f540("../crypto/evp/e_aes.c",0xaf7,"aes_gcm_tls_cipher");
      FUN_0051f8f0(6,0xb7,0);
      param_4 = 0xffffffff;
      goto LAB_00527c35;
    }
  }
  iVar2 = FUN_00536c00(param_1,uVar9,8,param_2);
  if (0 < iVar2) {
    lVar6 = param_1 + 0x38;
    lVar4 = lVar3 + 0x100;
    iVar2 = FUN_0054e3e0(lVar4,lVar6,(long)*(int *)(lVar3 + 0x2d0));
    if (iVar2 == 0) {
      param_3 = param_3 + 8;
      param_2 = param_2 + 8;
      param_4 = param_4 - 0x18;
      pcVar10 = *(code **)(lVar3 + 0x2e0);
      if (*(int *)(param_1 + 0x10) == 0) {
        if (pcVar10 == (code *)0x0) {
          iVar2 = FUN_0054e990(lVar4,param_3,param_2,param_4);
        }
        else {
          uVar7 = param_4;
          lVar8 = param_2;
          lVar5 = param_3;
          if ((0xf < param_4) && (pcVar10 == FUN_00495dc0)) {
            if (*(code **)(lVar3 + 0x268) == FUN_00550be0) {
              iVar2 = FUN_0054e990(lVar4,0,0,0);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar5 = FUN_0054bb40(param_3,param_2,param_4,*(undefined8 *)(lVar3 + 0x280),lVar4,
                                   lVar3 + 0x140);
              *(long *)(lVar3 + 0x138) = *(long *)(lVar3 + 0x138) + lVar5;
              pcVar10 = *(code **)(lVar3 + 0x2e0);
              uVar7 = param_4 - lVar5;
              lVar8 = param_2 + lVar5;
              lVar5 = lVar5 + param_3;
            }
            else {
              pcVar10 = FUN_00495dc0;
            }
          }
          iVar2 = FUN_0054f140(lVar4,lVar5,lVar8,uVar7,pcVar10);
        }
        if (iVar2 == 0) {
          FUN_0054f630(lVar4,lVar6,0x10);
          iVar2 = FUN_00422820(lVar6,param_3 + param_4,0x10);
          if (iVar2 == 0) {
            param_4 = param_4 & 0xffffffff;
            goto LAB_00527c35;
          }
          FUN_004227b0(param_2,param_4);
        }
      }
      else {
        if (pcVar10 == (code *)0x0) {
          iVar2 = FUN_0054e520(lVar4,param_3,param_2,param_4);
        }
        else {
          uVar7 = param_4;
          lVar6 = param_2;
          if ((pcVar10 == FUN_00495dc0) && (0x1f < param_4)) {
            if (*(code **)(lVar3 + 0x268) == FUN_00550be0) {
              iVar2 = FUN_0054e520(lVar4,0,0,0);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              lVar6 = FUN_0054be00(param_3,param_2,param_4,*(undefined8 *)(lVar3 + 0x280),lVar4,
                                   lVar3 + 0x140);
              *(long *)(lVar3 + 0x138) = *(long *)(lVar3 + 0x138) + lVar6;
              pcVar10 = *(code **)(lVar3 + 0x2e0);
              param_3 = param_3 + lVar6;
              uVar7 = param_4 - lVar6;
              lVar6 = param_2 + lVar6;
            }
            else {
              pcVar10 = FUN_00495dc0;
            }
          }
          iVar2 = FUN_0054ede0(lVar4,param_3,lVar6,uVar7,pcVar10);
        }
        if (iVar2 == 0) {
          FUN_0054f630(lVar4,param_2 + param_4,0x10);
          param_4 = (ulong)((int)param_4 + 0x18);
          goto LAB_00527c35;
        }
      }
    }
  }
  param_4 = 0xffffffff;
LAB_00527c35:
  *(undefined4 *)(lVar3 + 0xfc) = 0;
  *(undefined4 *)(lVar3 + 0x2d0) = 0xffffffff;
  return param_4;
}

