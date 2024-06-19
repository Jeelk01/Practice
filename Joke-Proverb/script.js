let Proverb = [
    'A penny saved is a penny earned.',
    'Actions speak louder than words.',
    'Birds of a feather flock together.',
    'Don’t count your chickens before they hatch.',
    'Every cloud has a silver lining.',
    'Honesty is the best policy.',
    'The early bird catches the worm.',
    'Two wrongs don’t make a right.',
    'When in Rome, do as the Romans do.',
    'You reap what you sow.'
];

const Joke = [
' Why don\'t skeletons fight each other? They don\'t have the guts.' ,
' I\'m reading a book on anti-gravity.It\'s impossible to put down! ',
' Parallel lines have so much in common. It\'s a shame they\'ll never meet.',
' Why did the scarecrow win an award? Because he was outstanding in his field.',
' I told my wife she should embrace her mistakes. She gave me a hug.',
' What do you call fake spaghetti? An impasta.',
' I used to play piano by ear, but now I use my hands.',
' I\'m on a whiskey diet. I\'ve lost three days already.',
' Why did the tomato turn red? Because it saw the salad dressing! ',
' I used to be a baker, but I couldn\'t make enough dough.',
' What\'s orange and sounds like a parrot? A carrot.',
' What do you call a fish wearing a bowtie? Sofishticated.',
' Why couldn\'t the bicycle stand up by itself? It was two-tired.',
' What did the grape do when he got stepped on? He let out a little wine.',
' Why was the math book sad? It had too many problems.',
' How does a penguin build its house? Igloos it together.',
' Why don\'t eggs tell jokes? Because they might crack up.',
' What do you get when you cross a snowman and a vampire? Frostbite.',
' How do you organize a space party? You planet.',
' Why did the scarecrow become a successful neurosurgeon? Because he was outstanding in his field.',
' Why don\'t seagulls fly over the bay? Because then they\'d be called bagels.',
' Why did the golfer bring two pairs of pants? In case he got a hole in one.',
' How does a cucumber become a pickle? It goes through a jarring experience.',
' Why did the tomato turn red? Because it saw the salad dressing!',
' What do you call a bear with no teeth? A gummy bear.',
' What did one ocean say to the other ocean? Nothing, they just waved.',
' What\'s the best way to watch a fly fishing tournament? Live stream.',
' Why did the scarecrow win an award? Because he was outstanding in his field.',
' What did one wall say to the other wall? I\'ll meet you at the corner.',
' How do you organize a space party? You planet.',
' Why don\'t skeletons fight each other? They don\'t have the guts.',
' Why did the scarecrow win an award? Because he was outstanding in his field.',
' I told my wife she should embrace her mistakes. She gave me a hug.',
' What do you call fake spaghetti? An impasta.',
' I used to play piano by ear, but now I use my hands.',
' I\'m on a whiskey diet. I\'ve lost three days already.',
' Why did the tomato turn red? Because it saw the salad dressing!'
]

function NewProverb()
{
    let r = Math.floor(Math.random() * Proverb.length);
    console.log(r);
    let a = document.getElementById("content");
    a.innerHTML = Proverb[r];
    console.log(Proverb[r]);
}

function Newjoke()
{
    let r = Math.floor(Math.random() * Proverb.length);
    console.log(r);
    let a = document.getElementById("content");
    a.innerHTML = Joke[r];
    console.log(Joke[r]);
}z` `