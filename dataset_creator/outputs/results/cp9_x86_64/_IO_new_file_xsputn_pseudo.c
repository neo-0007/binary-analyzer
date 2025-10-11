
char * _IO_new_file_xsputn(uint *param_1,char *param_2,char *param_3)

{
  short sVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_3 == (char *)0x0) {
    return (char *)0x0;
  }
  pvVar3 = *(void **)(param_1 + 10);
  pcVar10 = param_3;
  if ((*param_1 & 0xa00) == 0xa00) {
    pcVar9 = param_2 + (long)param_3;
    pcVar8 = (char *)(*(long *)(param_1 + 0x10) - (long)pvVar3);
    if (pcVar8 < param_3) {
      lVar4 = 0;
      if (pcVar8 == (char *)0x0) goto LAB_006fac33;
LAB_006fabda:
      if (param_3 < pcVar8) {
        pcVar8 = param_3;
      }
      pvVar3 = mempcpy(pvVar3,param_2,(size_t)pcVar8);
      *(void **)(param_1 + 10) = pvVar3;
      param_2 = param_2 + (long)pcVar8;
      pcVar10 = param_3 + -(long)pcVar8;
    }
    else {
      do {
        if (pcVar9 <= param_2) {
          lVar4 = 0;
          goto LAB_006fabda;
        }
        pcVar9 = pcVar9 + -1;
      } while (*pcVar9 != '\n');
      pcVar8 = pcVar9 + (1 - (long)param_2);
      if (pcVar8 != (char *)0x0) {
        lVar4 = 1;
        goto LAB_006fabda;
      }
      lVar4 = 1;
    }
    if (pcVar10 + lVar4 == (char *)0x0) {
      return pcVar8;
    }
  }
  else if (pvVar3 < *(void **)(param_1 + 0xc)) {
    pcVar8 = (char *)((long)*(void **)(param_1 + 0xc) - (long)pvVar3);
    lVar4 = 0;
    if (pcVar8 != (char *)0x0) goto LAB_006fabda;
  }
LAB_006fac33:
  lVar4 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar4 - 0x932180U) {
    _IO_vtable_check();
  }
  iVar2 = (**(code **)(lVar4 + 0x18))(param_1,0xffffffff);
  if (iVar2 == -1) {
    if (pcVar10 != (char *)0x0) {
      return param_3 + -(long)pcVar10;
    }
    return (char *)0xffffffffffffffff;
  }
  pcVar9 = pcVar10;
  if (0x7f < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe))) {
    pcVar9 = pcVar10 + -((ulong)pcVar10 %
                        (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe)));
  }
  if (pcVar9 == (char *)0x0) {
LAB_006fac91:
    if (pcVar10 != (char *)0x0) {
      lVar4 = _IO_default_xsputn(param_1,param_2 + (long)pcVar9,pcVar10);
      param_3 = param_3 + (lVar4 - (long)pcVar10);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x36);
    if ((*param_1 & 0x1000) == 0) {
      lVar6 = *(long *)(param_1 + 4);
      lVar7 = *(long *)(param_1 + 8);
      if (lVar6 == lVar7) goto LAB_006fad3d;
      if (0x827 < lVar4 - 0x932180U) {
        _IO_vtable_check();
        lVar7 = *(long *)(param_1 + 8);
        lVar6 = *(long *)(param_1 + 4);
      }
      lVar4 = (**(code **)(lVar4 + 0x80))(param_1,lVar7 - lVar6,1);
      if (lVar4 != -1) {
        *(long *)(param_1 + 0x24) = lVar4;
        lVar4 = *(long *)(param_1 + 0x36);
        goto LAB_006fad3d;
      }
      pcVar8 = (char *)0x0;
    }
    else {
      param_1[0x24] = 0xffffffff;
      param_1[0x25] = 0xffffffff;
LAB_006fad3d:
      if (0x827 < lVar4 - 0x932180U) {
        _IO_vtable_check();
      }
      pcVar8 = (char *)(**(code **)(lVar4 + 0x78))(param_1,param_2,pcVar9);
      if ((pcVar8 != (char *)0x0) && ((ushort)param_1[0x20] != 0)) {
        sVar1 = _IO_adjust_column((ushort)param_1[0x20] - 1,param_2,(ulong)pcVar8 & 0xffffffff);
        *(short *)(param_1 + 0x20) = sVar1 + 1;
      }
      uVar5 = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 10) = uVar5;
      *(undefined8 *)(param_1 + 2) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar5;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 8) = uVar5;
      if ((0 < (int)param_1[0x30]) || ((*param_1 & 0x202) == 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
      }
      *(undefined8 *)(param_1 + 0xc) = uVar5;
      if (pcVar9 <= pcVar8) {
        pcVar10 = pcVar10 + -(long)pcVar8;
        goto LAB_006fac91;
      }
    }
    param_3 = pcVar8 + ((long)param_3 - (long)pcVar10);
  }
  return param_3;
}

