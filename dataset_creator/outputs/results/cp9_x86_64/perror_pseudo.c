
void perror(char *__s)

{
  undefined4 uVar1;
  int iVar2;
  FILE *__stream;
  long in_FS_OFFSET;
  
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  if (((*(int *)(stderr + 0xc0) == 0) && (iVar2 = fileno((FILE *)stderr), iVar2 != -1)) &&
     (iVar2 = dup(iVar2), iVar2 != -1)) {
    __stream = fdopen(iVar2,"w+");
    if (__stream != (FILE *)0x0) {
      perror_internal(__stream,__s,uVar1);
      if ((__stream->_flags & 0x20) != 0) {
        *(uint *)stderr = *(uint *)stderr | 0x20;
      }
      fclose(__stream);
      return;
    }
    close(iVar2);
  }
  perror_internal(stderr,__s,uVar1);
  return;
}

