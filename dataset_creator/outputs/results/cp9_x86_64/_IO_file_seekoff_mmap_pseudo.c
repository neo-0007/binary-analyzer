
long _IO_file_seekoff_mmap(uint *param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  long lVar3;
  
  if (param_4 != 0) {
    if (param_3 == 1) {
      param_2 = param_2 + (*(long *)(param_1 + 2) - *(long *)(param_1 + 6));
    }
    else if (param_3 == 2) {
      param_2 = param_2 + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe));
    }
    if (param_2 < 0) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      param_2 = -1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar2 - 0x932180U) {
        _IO_vtable_check();
      }
      lVar2 = (**(code **)(lVar2 + 0x80))(param_1,param_2,0);
      if (lVar2 < 0) {
        param_2 = -1;
      }
      else {
        lVar3 = *(long *)(param_1 + 0x10);
        lVar1 = *(long *)(param_1 + 0xe);
        if (param_2 <= lVar3 - lVar1) {
          lVar3 = lVar1 + param_2;
        }
        *param_1 = *param_1 & 0xffffffef;
        *(long *)(param_1 + 6) = lVar1;
        *(long *)(param_1 + 0x24) = lVar2;
        *(long *)(param_1 + 2) = lVar3;
        *(long *)(param_1 + 4) = lVar3;
      }
    }
    return param_2;
  }
  return *(long *)(param_1 + 0x24) - (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
}

