
ulong FUN_004a55d0(uint *param_1,undefined8 ****param_2,uint *param_3,char *param_4)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 ***local_20;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = param_2;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (pcVar1 = *(code **)(*(long *)(param_4 + 0x20) + 0x30), pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    uVar5 = (ulong)uVar2;
    goto LAB_004a5600;
  }
  if (*param_4 == '\0') {
    lVar3 = *(long *)(param_4 + 8);
    if (lVar3 == 1) {
LAB_004a567a:
      uVar2 = *param_3;
      if (uVar2 < 0xb) goto LAB_004a5648;
      goto switchD_004a5659_caseD_4a5683;
    }
    if (*(long *)param_1 != 0) goto LAB_004a5674;
  }
  else if (*(long *)param_1 != 0) {
    if (*param_4 == '\x05') {
      uVar2 = *(uint *)(*(long *)param_1 + 4);
      *param_3 = uVar2;
    }
    else {
      lVar3 = *(long *)(param_4 + 8);
LAB_004a5674:
      if (lVar3 != -4) goto LAB_004a567a;
      uVar2 = **(uint **)param_1;
      param_1 = *(uint **)param_1 + 2;
      *param_3 = uVar2;
    }
    if (uVar2 < 0xb) {
LAB_004a5648:
      uVar5 = (ulong)uVar2;
      switch((long)&switchD_004a5659::switchdataD_007e8420 +
             (long)(int)(&switchD_004a5659::switchdataD_007e8420)[uVar5]) {
      case 0x4a5683:
        goto switchD_004a5659_caseD_4a5683;
      case 0x4a56d8:
        if (param_2 != (undefined8 ****)0x0) {
          param_2 = &local_20;
        }
        uVar2 = FUN_0049f360(*(undefined8 *)param_1,param_2);
        uVar5 = (ulong)uVar2;
        break;
      case 0x4a5700:
        uVar2 = *param_1;
        if (uVar2 == 0xffffffff) goto LAB_004a571f;
        if (*(long *)(param_4 + 8) != -4) {
          if (uVar2 == 0) {
            if (*(long *)(param_4 + 0x28) != 0) goto LAB_004a5795;
          }
          else if (*(long *)(param_4 + 0x28) < 1) goto LAB_004a5795;
          goto LAB_004a571f;
        }
LAB_004a5795:
        local_11 = (undefined1)uVar2;
        lVar3 = 1;
        puVar4 = &local_11;
        if (param_2 == (undefined8 ****)0x0) break;
        goto LAB_004a57b1;
      case 0x4a5730:
        puVar4 = *(undefined1 **)(*(long *)param_1 + 0x18);
        uVar2 = *(uint *)(*(long *)param_1 + 0x14);
        uVar5 = (ulong)uVar2;
        if ((puVar4 == (undefined1 *)0x0) || (uVar2 == 0)) goto LAB_004a571f;
        if (param_2 == (undefined8 ****)0x0) break;
        goto LAB_004a56b2;
      case 0x4a5760:
        if (param_2 != (undefined8 ****)0x0) {
          param_2 = &local_20;
        }
        uVar2 = FUN_005b3c50(*(undefined8 *)param_1,param_2);
        uVar5 = (ulong)uVar2;
        break;
      case 0x4a5788:
        uVar5 = 0;
      }
    }
    else {
switchD_004a5659_caseD_4a5683:
      param_1 = *(uint **)param_1;
      if ((*(long *)(param_4 + 0x28) == 0x800) && ((param_1[4] & 0x10) != 0)) {
        if (param_2 == (undefined8 ****)0x0) {
          uVar5 = 0xfffffffe;
        }
        else {
          *(undefined8 *****)(param_1 + 2) = param_2;
          uVar5 = 0xfffffffe;
          *param_1 = 0;
        }
        goto LAB_004a5600;
      }
      uVar5 = (ulong)*param_1;
      if ((param_2 == (undefined8 ****)0x0) || (*param_1 == 0)) goto LAB_004a5600;
      puVar4 = *(undefined1 **)(param_1 + 2);
LAB_004a56b2:
      lVar3 = (long)(int)uVar5;
LAB_004a57b1:
      thunk_FUN_00713a50(param_2,puVar4,lVar3);
    }
    goto LAB_004a5600;
  }
LAB_004a571f:
  uVar5 = 0xffffffff;
LAB_004a5600:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

