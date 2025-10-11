
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

long sysconf(int __name)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  rlimit local_68;
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (__name - 0xb9U < 0xf) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar2 = __cache_sysconf(__name);
      return lVar2;
    }
    goto LAB_0075f949;
  }
  if (0x8b < __name) {
    if (__name == 0xf9) {
      pcVar3 = _dl_minsigstacksize;
      if (_dl_minsigstacksize == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("GLRO(dl_minsigstacksize) != 0","../sysdeps/unix/sysv/linux/x86/../sysconf.c",
                      0x57,"linux_sysconf");
      }
    }
    else if (__name == 0xfa) {
      if (_dl_minsigstacksize == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("minsigstacksize != 0","../sysdeps/unix/sysv/linux/sysconf-sigstksz.h",0x19,
                      "sysconf_sigstksz");
      }
      pcVar3 = _dl_minsigstacksize;
      if ((long)_dl_minsigstacksize < 0x800) {
        pcVar3 = (char *)0x800;
      }
      pcVar3 = (char *)((long)pcVar3 << 2);
    }
    else if (__name == 0x95) {
switchD_0075f4f2_caseD_9:
      pcVar3 = (char *)0x31069;
    }
    else {
      if (__name < 0xb0) goto LAB_0075f5a8;
      switch(__name) {
      case 0xb0:
      case 0xed:
switchD_0075f6e2_caseD_7d:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          pcVar3 = "ILP32_OFF32";
LAB_0075f78b:
          lVar2 = __sysconf_check_spec(pcVar3);
          return lVar2;
        }
        goto LAB_0075f949;
      case 0xb1:
      case 0xee:
switchD_0075f6e2_caseD_7e:
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0075f949;
        pcVar3 = "ILP32_OFFBIG";
        goto LAB_0075f78b;
      case 0xb2:
      case 0xef:
        goto switchD_0075f4f2_caseD_7;
      case 0xb3:
      case 0xb5:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xf0:
      case 0xf2:
      case 0xf3:
      case 0xf4:
      case 0xf5:
      case 0xf6:
        goto switchD_0075f4f2_caseD_0;
      case 0xb4:
switchD_0075f6e2_caseD_6a:
        pcVar3 = (char *)0x40;
        break;
      default:
        goto switchD_0075f4f2_caseD_29;
      case 0xeb:
      case 0xec:
        goto switchD_0075f4f2_caseD_9;
      case 0xf9:
        goto switchD_0075f4f2_caseD_25;
      case 0xfa:
switchD_0075f6e2_caseD_58:
        pcVar3 = (char *)0x2000;
      }
    }
    goto LAB_0075f57d;
  }
  if (0x89 < __name) goto switchD_0075f4f2_caseD_9;
  if (__name != 3) {
    if (__name == 0x22) {
      iVar1 = getrlimit64(__RLIMIT_SIGPENDING,&local_68);
      pcVar3 = (char *)local_68.rlim_cur;
      if (iVar1 != 0) {
        iVar1 = __open64_nocancel("/proc/sys/kernel/rtsig-max",0x80000);
        if (iVar1 != -1) goto LAB_0075f43d;
        goto switchD_0075f4f2_caseD_0;
      }
    }
    else {
      if (__name != 0) goto LAB_0075f4b8;
      iVar1 = getrlimit64(RLIMIT_STACK,&local_68);
      pcVar3 = (char *)0x20000;
      if (((iVar1 == 0) && ((char *)0x7ffff < local_68.rlim_cur)) &&
         (pcVar3 = (char *)(local_68.rlim_cur >> 2),
         (char *)0x600000 < (char *)(local_68.rlim_cur >> 2))) {
        pcVar3 = (char *)0x600000;
      }
    }
    goto LAB_0075f57d;
  }
  iVar1 = __open64_nocancel("/proc/sys/kernel/ngroups_max",0x80000);
  pcVar3 = (char *)0x10000;
  if (iVar1 == -1) goto LAB_0075f57d;
LAB_0075f43d:
  do {
    lVar2 = __read_nocancel(iVar1,local_58,0x1f);
    if (lVar2 != -1) {
      __close_nocancel(iVar1);
      if (lVar2 < 1) goto LAB_0075f4b8;
      local_58[lVar2] = '\0';
      pcVar3 = (char *)strtoll(local_58,(char **)&local_68,10);
      if (((char *)local_68.rlim_cur == local_58) ||
         ((*(char *)local_68.rlim_cur != '\0' && (*(char *)local_68.rlim_cur != '\n'))))
      goto LAB_0075f4b8;
      goto LAB_0075f57d;
    }
  } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
  __close_nocancel(iVar1);
LAB_0075f4b8:
  if (0x7e < __name) {
LAB_0075f5a8:
    uVar4 = 1L << ((char)__name + 0x81U & 0x3f);
    if ((uVar4 & 0x1ffdea3fffb82) == 0) {
      if ((uVar4 & 0x210c000460) == 0) {
        if ((uVar4 & 0x5000001d) == 0) goto switchD_0075f4f2_caseD_29;
        goto switchD_0075f4f2_caseD_7;
      }
      goto switchD_0075f4f2_caseD_9;
    }
switchD_0075f4f2_caseD_0:
    pcVar3 = (char *)0xffffffffffffffff;
    goto LAB_0075f57d;
  }
  if (__name < 0x47) {
    if (0x2d < __name) {
      if (__name - 0x2eU < 0x19) {
        uVar4 = 1L << ((byte)(__name - 0x2eU) & 0x3f);
        if ((uVar4 & 0x1fbf98) != 0) goto switchD_0075f4f2_caseD_0;
        pcVar3 = (char *)0x31069;
        if ((uVar4 & 0x600067) != 0) goto LAB_0075f57d;
        if ((uVar4 & 0x1804000) != 0) goto switchD_0075f6e2_caseD_4a;
      }
switchD_0075f4f2_caseD_29:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      goto switchD_0075f4f2_caseD_0;
    }
    switch(__name) {
    case 0:
    case 6:
    case 0x17:
    case 0x18:
    case 0x1b:
    case 0x20:
    case 0x22:
    case 0x23:
      goto switchD_0075f4f2_caseD_0;
    case 1:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar2 = __get_child_max();
        return lVar2;
      }
      goto LAB_0075f949;
    case 2:
      iVar1 = __getclktck();
      pcVar3 = (char *)(long)iVar1;
      break;
    case 3:
      pcVar3 = (char *)0x10000;
      break;
    case 4:
      iVar1 = getdtablesize();
      pcVar3 = (char *)(long)iVar1;
      break;
    case 5:
      goto switchD_0075f4f2_caseD_5;
    case 7:
    case 8:
      goto switchD_0075f4f2_caseD_7;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1d:
      goto switchD_0075f4f2_caseD_9;
    case 0x19:
      goto switchD_0075f4f2_caseD_19;
    case 0x1a:
    case 0x21:
      goto switchD_0075f4f2_caseD_1a;
    case 0x1c:
      pcVar3 = (char *)0x8000;
      break;
    case 0x1e:
      iVar1 = getpagesize();
      pcVar3 = (char *)(long)iVar1;
      break;
    case 0x1f:
    case 0x2a:
      goto switchD_0075f4f2_caseD_1f;
    case 0x24:
    case 0x26:
      pcVar3 = (char *)0x63;
      break;
    case 0x25:
    case 0x2b:
    case 0x2d:
      goto switchD_0075f4f2_caseD_25;
    case 0x27:
      pcVar3 = (char *)0x3e8;
      break;
    case 0x28:
      goto switchD_0075f4f2_caseD_28;
    default:
      goto switchD_0075f4f2_caseD_29;
    case 0x2c:
      goto switchD_0075f4f2_caseD_2c;
    }
    goto LAB_0075f57d;
  }
  switch(__name) {
  case 0x48:
  case 0x6b:
switchD_0075f4f2_caseD_1f:
    pcVar3 = (char *)0x20;
    break;
  case 0x49:
  case 0x5a:
    pcVar3 = (char *)0x4;
    break;
  case 0x4a:
switchD_0075f6e2_caseD_4a:
    pcVar3 = (char *)0x400;
    break;
  case 0x4b:
    if (_dl_minsigstacksize == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("pthread_stack_min != 0",
                    "../sysdeps/unix/sysv/linux/sysconf-pthread_stack_min.h",0x1a,
                    "__get_pthread_stack_min");
    }
    pcVar3 = _dl_minsigstacksize;
    if ((long)_dl_minsigstacksize < 0x4000) {
      pcVar3 = (char *)0x4000;
    }
    break;
  case 0x4c:
  case 0x5c:
  case 0x61:
  case 0x75:
    goto switchD_0075f4f2_caseD_0;
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x5f:
  case 0x60:
    goto switchD_0075f4f2_caseD_9;
  case 0x53:
    iVar1 = get_nprocs_conf();
    pcVar3 = (char *)(long)iVar1;
    break;
  case 0x54:
    iVar1 = get_nprocs();
    pcVar3 = (char *)(long)iVar1;
    break;
  case 0x55:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar2 = get_phys_pages();
      return lVar2;
    }
    goto LAB_0075f949;
  case 0x56:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar2 = get_avphys_pages();
      return lVar2;
    }
    goto LAB_0075f949;
  case 0x57:
  case 0x68:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
switchD_0075f4f2_caseD_1a:
    pcVar3 = (char *)0x7fffffff;
    break;
  case 0x58:
    goto switchD_0075f6e2_caseD_58;
  case 0x59:
    pcVar3 = (char *)0x2bc;
    break;
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x62:
  case 99:
  case 100:
switchD_0075f4f2_caseD_7:
    pcVar3 = (char *)0x1;
    break;
  case 0x65:
    pcVar3 = (char *)0x8;
    break;
  case 0x66:
  case 0x6f:
    pcVar3 = (char *)0x7f;
    break;
  case 0x67:
  case 0x70:
    pcVar3 = (char *)0xffffffffffffff80;
    break;
  case 0x69:
    pcVar3 = (char *)0xffffffff80000000;
    break;
  case 0x6a:
    goto switchD_0075f6e2_caseD_6a;
  case 0x6c:
switchD_0075f4f2_caseD_5:
    pcVar3 = &DAT_00000010;
    break;
  case 0x6d:
switchD_0075f4f2_caseD_19:
    pcVar3 = (char *)0x14;
    break;
  case 0x6e:
  case 0x71:
switchD_0075f4f2_caseD_2c:
    pcVar3 = (char *)0x7fff;
    break;
  case 0x72:
    pcVar3 = (char *)0xffffffffffff8000;
    break;
  case 0x73:
switchD_0075f4f2_caseD_28:
    pcVar3 = (char *)0xff;
    break;
  case 0x74:
    pcVar3 = (char *)0xffffffff;
    break;
  case 0x76:
    pcVar3 = (char *)0xffff;
    break;
  case 0x77:
    pcVar3 = (char *)0x1000;
    break;
  case 0x78:
switchD_0075f4f2_caseD_25:
    pcVar3 = (char *)0x800;
    break;
  case 0x7d:
    goto switchD_0075f6e2_caseD_7d;
  case 0x7e:
    goto switchD_0075f6e2_caseD_7e;
  default:
    pcVar3 = (char *)0x100;
  }
LAB_0075f57d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)pcVar3;
  }
LAB_0075f949:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

