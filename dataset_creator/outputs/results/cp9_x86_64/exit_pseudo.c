
void exit(int __status)

{
                    /* WARNING: Subroutine does not return */
  __run_exit_handlers(__status,&__exit_funcs,1,1);
}

