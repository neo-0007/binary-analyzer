
char * FUN_00768db0(int param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  char *local_68 [2];
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 - 0xb9U < 0xf) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar3 = (char *)FUN_007a8f90(param_1);
      return pcVar3;
    }
    goto LAB_00769349;
  }
  if (0x8b < param_1) {
    if (param_1 == 0xf9) {
      pcVar3 = DAT_0094aea0;
      if (DAT_0094aea0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("GLRO(dl_minsigstacksize) != 0","../sysdeps/unix/sysv/linux/x86/../sysconf.c",
                     0x57,"linux_sysconf");
      }
    }
    else if (param_1 == 0xfa) {
      if (DAT_0094aea0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("minsigstacksize != 0","../sysdeps/unix/sysv/linux/sysconf-sigstksz.h",0x19,
                     "sysconf_sigstksz");
      }
      pcVar3 = DAT_0094aea0;
      if ((long)DAT_0094aea0 < 0x800) {
        pcVar3 = (char *)0x800;
      }
      pcVar3 = (char *)((long)pcVar3 << 2);
    }
    else if (param_1 == 0x95) {
switchD_00768ef2_caseD_9:
      pcVar3 = (char *)0x31069;
    }
    else {
      if (param_1 < 0xb0) goto LAB_00768fa8;
      switch(param_1) {
      case 0xb0:
      case 0xed:
switchD_007690e2_caseD_7d:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          pcVar3 = "ILP32_OFF32";
LAB_0076918b:
          pcVar3 = (char *)FUN_00768c80(pcVar3);
          return pcVar3;
        }
        goto LAB_00769349;
      case 0xb1:
      case 0xee:
switchD_007690e2_caseD_7e:
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00769349;
        pcVar3 = "ILP32_OFFBIG";
        goto LAB_0076918b;
      case 0xb2:
      case 0xef:
        goto switchD_00768ef2_caseD_7;
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
        goto switchD_00768ef2_caseD_0;
      case 0xb4:
switchD_007690e2_caseD_6a:
        pcVar3 = (char *)0x40;
        break;
      default:
        goto switchD_00768ef2_caseD_29;
      case 0xeb:
      case 0xec:
        goto switchD_00768ef2_caseD_9;
      case 0xf9:
        goto switchD_00768ef2_caseD_25;
      case 0xfa:
switchD_007690e2_caseD_58:
        pcVar3 = (char *)0x2000;
      }
    }
    goto LAB_00768f7d;
  }
  if (0x89 < param_1) goto switchD_00768ef2_caseD_9;
  if (param_1 != 3) {
    if (param_1 == 0x22) {
      iVar1 = FUN_0076eaa0(0xb,local_68);
      pcVar3 = local_68[0];
      if (iVar1 != 0) {
        iVar1 = FUN_0076e620("/proc/sys/kernel/rtsig-max",0x80000);
        if (iVar1 != -1) goto LAB_00768e3d;
        goto switchD_00768ef2_caseD_0;
      }
    }
    else {
      if (param_1 != 0) goto LAB_00768eb8;
      iVar1 = FUN_0076eaa0(3,local_68);
      pcVar3 = (char *)0x20000;
      if (((iVar1 == 0) && ((char *)0x7ffff < local_68[0])) &&
         (pcVar3 = (char *)((ulong)local_68[0] >> 2), "" < (char *)((ulong)local_68[0] >> 2))) {
        pcVar3 = "";
      }
    }
    goto LAB_00768f7d;
  }
  iVar1 = FUN_0076e620("/proc/sys/kernel/ngroups_max",0x80000);
  pcVar3 = (char *)0x10000;
  if (iVar1 == -1) goto LAB_00768f7d;
LAB_00768e3d:
  do {
    lVar2 = FUN_0076e770(iVar1,local_58,0x1f);
    if (lVar2 != -1) {
      FUN_0076e4b0(iVar1);
      if (lVar2 < 1) goto LAB_00768eb8;
      local_58[lVar2] = '\0';
      pcVar3 = (char *)FUN_006e94d0(local_58,local_68,10);
      if ((local_68[0] == local_58) || ((*local_68[0] != '\0' && (*local_68[0] != '\n'))))
      goto LAB_00768eb8;
      goto LAB_00768f7d;
    }
  } while (*(int *)(in_FS_OFFSET + -0x58) == 4);
  FUN_0076e4b0(iVar1);
LAB_00768eb8:
  if (0x7e < param_1) {
LAB_00768fa8:
    uVar4 = 1L << ((char)param_1 + 0x81U & 0x3f);
    if ((uVar4 & 0x1ffdea3fffb82) == 0) {
      if ((uVar4 & 0x210c000460) == 0) {
        if ((uVar4 & 0x5000001d) == 0) goto switchD_00768ef2_caseD_29;
        goto switchD_00768ef2_caseD_7;
      }
      goto switchD_00768ef2_caseD_9;
    }
switchD_00768ef2_caseD_0:
    pcVar3 = (char *)0xffffffffffffffff;
    goto LAB_00768f7d;
  }
  if (param_1 < 0x47) {
    if (0x2d < param_1) {
      if (param_1 - 0x2eU < 0x19) {
        uVar4 = 1L << ((byte)(param_1 - 0x2eU) & 0x3f);
        if ((uVar4 & 0x1fbf98) != 0) goto switchD_00768ef2_caseD_0;
        pcVar3 = (char *)0x31069;
        if ((uVar4 & 0x600067) != 0) goto LAB_00768f7d;
        if ((uVar4 & 0x1804000) != 0) goto switchD_007690e2_caseD_4a;
      }
switchD_00768ef2_caseD_29:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      goto switchD_00768ef2_caseD_0;
    }
    switch(param_1) {
    case 0:
    case 6:
    case 0x17:
    case 0x18:
    case 0x1b:
    case 0x20:
    case 0x22:
    case 0x23:
      goto switchD_00768ef2_caseD_0;
    case 1:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar3 = (char *)FUN_0076d770();
        return pcVar3;
      }
      goto LAB_00769349;
    case 2:
      iVar1 = FUN_007708f0();
      pcVar3 = (char *)(long)iVar1;
      break;
    case 3:
      pcVar3 = (char *)0x10000;
      break;
    case 4:
      iVar1 = FUN_0076ed20();
      pcVar3 = (char *)(long)iVar1;
      break;
    case 5:
      goto switchD_00768ef2_caseD_5;
    case 7:
    case 8:
      goto switchD_00768ef2_caseD_7;
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
      goto switchD_00768ef2_caseD_9;
    case 0x19:
      goto switchD_00768ef2_caseD_19;
    case 0x1a:
    case 0x21:
      goto switchD_00768ef2_caseD_1a;
    case 0x1c:
      pcVar3 = (char *)0x8000;
      break;
    case 0x1e:
      iVar1 = FUN_0076ece0();
      pcVar3 = (char *)(long)iVar1;
      break;
    case 0x1f:
    case 0x2a:
      goto switchD_00768ef2_caseD_1f;
    case 0x24:
    case 0x26:
      pcVar3 = (char *)0x63;
      break;
    case 0x25:
    case 0x2b:
    case 0x2d:
      goto switchD_00768ef2_caseD_25;
    case 0x27:
      pcVar3 = (char *)0x3e8;
      break;
    case 0x28:
      goto switchD_00768ef2_caseD_28;
    default:
      goto switchD_00768ef2_caseD_29;
    case 0x2c:
      goto switchD_00768ef2_caseD_2c;
    }
    goto LAB_00768f7d;
  }
  switch(param_1) {
  case 0x48:
  case 0x6b:
switchD_00768ef2_caseD_1f:
    pcVar3 = (char *)0x20;
    break;
  case 0x49:
  case 0x5a:
    pcVar3 = (char *)0x4;
    break;
  case 0x4a:
switchD_007690e2_caseD_4a:
    pcVar3 = (char *)0x400;
    break;
  case 0x4b:
    if (DAT_0094aea0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("pthread_stack_min != 0","../sysdeps/unix/sysv/linux/sysconf-pthread_stack_min.h"
                   ,0x1a,"__get_pthread_stack_min");
    }
    pcVar3 = DAT_0094aea0;
    if ((long)DAT_0094aea0 < 0x4000) {
      pcVar3 = (char *)0x4000;
    }
    break;
  case 0x4c:
  case 0x5c:
  case 0x61:
  case 0x75:
    goto switchD_00768ef2_caseD_0;
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x5f:
  case 0x60:
    goto switchD_00768ef2_caseD_9;
  case 0x53:
    iVar1 = FUN_007706d0();
    pcVar3 = (char *)(long)iVar1;
    break;
  case 0x54:
    iVar1 = FUN_00770690();
    pcVar3 = (char *)(long)iVar1;
    break;
  case 0x55:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar3 = (char *)FUN_007707d0();
      return pcVar3;
    }
    goto LAB_00769349;
  case 0x56:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar3 = (char *)FUN_00770860();
      return pcVar3;
    }
    goto LAB_00769349;
  case 0x57:
  case 0x68:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
switchD_00768ef2_caseD_1a:
    pcVar3 = (char *)0x7fffffff;
    break;
  case 0x58:
    goto switchD_007690e2_caseD_58;
  case 0x59:
    pcVar3 = (char *)0x2bc;
    break;
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x62:
  case 99:
  case 100:
switchD_00768ef2_caseD_7:
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
    goto switchD_007690e2_caseD_6a;
  case 0x6c:
switchD_00768ef2_caseD_5:
    pcVar3 = &DAT_00000010;
    break;
  case 0x6d:
switchD_00768ef2_caseD_19:
    pcVar3 = (char *)0x14;
    break;
  case 0x6e:
  case 0x71:
switchD_00768ef2_caseD_2c:
    pcVar3 = (char *)0x7fff;
    break;
  case 0x72:
    pcVar3 = (char *)0xffffffffffff8000;
    break;
  case 0x73:
switchD_00768ef2_caseD_28:
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
switchD_00768ef2_caseD_25:
    pcVar3 = (char *)0x800;
    break;
  case 0x7d:
    goto switchD_007690e2_caseD_7d;
  case 0x7e:
    goto switchD_007690e2_caseD_7e;
  default:
    pcVar3 = (char *)0x100;
  }
LAB_00768f7d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar3;
  }
LAB_00769349:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

