
int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = __sigsetjmp(__env,0);
  return iVar1;
}

