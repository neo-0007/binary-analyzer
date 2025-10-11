
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t iconv(iconv_t __cd,char **__inbuf,size_t *__inbytesleft,char **__outbuf,
            size_t *__outbytesleft)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (__outbuf == (char **)0x0) {
    if ((__inbuf != (char **)0x0) && (pcVar1 = *__inbuf, pcVar1 != (char *)0x0)) {
      uVar3 = __gconv(__cd,__inbuf,pcVar1 + *__inbytesleft,0,*__outbytesleft + _SUB_00000000,
                      &local_48);
      *__inbytesleft = (size_t)(pcVar1 + (*__inbytesleft - (long)*__inbuf));
      goto code_r0x006c8ec2;
    }
LAB_006c8f10:
    uVar3 = __gconv(__cd,0,0,0,0,&local_48);
  }
  else {
    pcVar1 = *__outbuf;
    if ((__inbuf == (char **)0x0) || (pcVar2 = *__inbuf, pcVar2 == (char *)0x0)) {
      if (pcVar1 == (char *)0x0) goto LAB_006c8f10;
      uVar3 = __gconv(__cd,0,0,__outbuf,pcVar1 + *__outbytesleft,&local_48);
    }
    else {
      uVar3 = __gconv(__cd,__inbuf,pcVar2 + *__inbytesleft,__outbuf,pcVar1 + *__outbytesleft,
                      &local_48);
      *__inbytesleft = (size_t)(pcVar2 + (*__inbytesleft - (long)*__inbuf));
      if (pcVar1 == (char *)0x0) goto code_r0x006c8ec2;
    }
    *__outbytesleft = (size_t)(pcVar1 + (*__outbytesleft - (long)*__outbuf));
  }
code_r0x006c8ec2:
  switch(uVar3) {
  case 0:
  case 4:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    __assert_fail("!\"Nothing like this should happen\"","iconv.c",0x5a,"iconv");
  case 5:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 7;
    local_48 = 0xffffffffffffffff;
    break;
  case 6:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    local_48 = 0xffffffffffffffff;
    break;
  case 7:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    local_48 = 0xffffffffffffffff;
    break;
  case 8:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    local_48 = 0xffffffffffffffff;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_48;
}

