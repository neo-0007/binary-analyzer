
char * nl_langinfo_l(nl_item __item,__locale_t __l)

{
  uint uVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  uVar1 = __item >> 0x10;
  if ((uVar1 != 6) && (uVar1 < 0xd)) {
    if ((__item & 0xffffU) == 0xffff) {
      return __l->__names[(int)uVar1];
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
      abort();
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
    if ((__item & 0xffffU) <= *(uint *)(lVar2 + 0x38) &&
        *(uint *)(lVar2 + 0x38) != (__item & 0xffffU)) {
      return *(char **)(lVar2 + 0x40 + (ulong)(ushort)__item * 8);
    }
  }
  return "";
}

