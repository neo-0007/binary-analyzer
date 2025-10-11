
undefined1 * FUN_006e0b30(uint param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  uVar1 = (int)param_1 >> 0x10;
  if ((uVar1 != 6) && (uVar1 < 0xd)) {
    param_1 = param_1 & 0xffff;
    if (param_1 == 0xffff) {
      return *(undefined1 **)(param_2 + 0x80 + (long)(int)uVar1 * 8);
    }
    switch(uVar1) {
    case 0:
      lVar2 = **(long **)(in_FS_OFFSET + -0xd8);
      break;
    case 1:
      lVar2 = **(long **)(in_FS_OFFSET + -0xc0);
      break;
    case 2:
      lVar2 = **(long **)(in_FS_OFFSET + -0xb8);
      break;
    case 3:
      lVar2 = **(long **)(in_FS_OFFSET + -0x80);
      break;
    case 4:
      lVar2 = **(long **)(in_FS_OFFSET + -200);
      break;
    case 5:
      lVar2 = **(long **)(in_FS_OFFSET + -0xd0);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_00404713();
    case 7:
      lVar2 = **(long **)(in_FS_OFFSET + -0xb0);
      break;
    case 8:
      lVar2 = **(long **)(in_FS_OFFSET + -0xa8);
      break;
    case 9:
      lVar2 = **(long **)(in_FS_OFFSET + -0xa0);
      break;
    case 10:
      lVar2 = **(long **)(in_FS_OFFSET + -0x98);
      break;
    case 0xb:
      lVar2 = **(long **)(in_FS_OFFSET + -0x90);
      break;
    case 0xc:
      lVar2 = **(long **)(in_FS_OFFSET + -0x88);
    }
    if (param_1 < *(uint *)(lVar2 + 0x38)) {
      return *(undefined1 **)(lVar2 + 0x40 + (ulong)param_1 * 8);
    }
  }
  return &DAT_0083e5c2;
}

