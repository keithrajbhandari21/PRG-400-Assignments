import asyncio
import time

# 1. Asynchronous coroutine to print numbers (with labels)
async def print_numbers():
    for i in range(1, 6):  # 1 to 5
        print(f"{i}   ← number")
        await asyncio.sleep(1)  # Wait 1 second

# 2. Asynchronous coroutine to print letters (with labels)
async def print_letters():
    for letter in ['A', 'B', 'C', 'D', 'E']:
        print(f"{letter}   ← letter")
        await asyncio.sleep(1.5)  # Wait 1.5 seconds

# 3. Main coroutine to run both concurrently
async def main():
    start = time.time()

    await asyncio.gather(
        print_numbers(),
        print_letters()
    )

    end = time.time()
    print(f"\nTotal time taken: {round(end - start, 2)} seconds")

# Run the main coroutine
asyncio.run(main())
