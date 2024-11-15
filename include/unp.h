#include    <netinet/in.h>	
#include	<errno.h>
#include	<stdio.h>
#include	<string.h>
#include	<unistd.h>
#include    <stdlib.h>
#include    <sys/select.h>

#define	MAXLINE		4096
#define	LISTENQ		1024	/* 2nd argument to listen() */
#define SERV_PORT 9877
#define	SA	struct sockaddr

/* Define bzero() as a macro if it's not in standard C library. */
#ifndef	HAVE_BZERO
#define	bzero(ptr,n)		memset(ptr, 0, n)
/* $$.If bzero$$ */
/* $$.If memset$$ */
#endif

#ifndef	HAVE_INET_PTON_PROTO
int			 inet_pton(int, const char *, void *);
const char	*inet_ntop(int, const void *, char *, size_t);
#endif


int		 Socket(int, int, int);
void     Listen(int, int);
void	 Bind(int, const SA *, socklen_t);
int      Accept(int, struct sockaddr *, socklen_t *);
void	 Close(int);

void	 err_sys(const char *, ...);
void	 err_quit(const char *, ...);

FILE	*Fdopen(int, const char *);
char	*Fgets(char *, int, FILE *);
FILE	*Fopen(const char *, const char *);
void	 Fputs(const char *, FILE *);

void	 Write(int, void *, size_t);
ssize_t	 Readline(int, void *, size_t);

pid_t	 Fork(void);


typedef	void Sigfunc(int);	/* for signal handlers */
